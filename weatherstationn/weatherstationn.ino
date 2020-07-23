#include <ESP8266WiFi.h>
#include <WiFiUDP.h>
#include "NTPClientUpdated.h"
#include <OpenWeatherMapCurrent.h>
#include <OpenWeatherMapForecast.h>

#define WIFI_SSID "FiOS-GN6ED"
#define WIFI_PASS "dan2663carl39hard"
#define MAX_FORECAST 3

//Define time constraints(const = cannot be changed)
WiFiUDP ntpUDP;   // user dataground protocol, ntp client retrieves info from this server
const long utcOffsetInSeconds = -4 * 3600; //-4 UTC Offset/Jersey
NTPClientUpdated timeClient(ntpUDP, "pool.ntp.org", utcOffsetInSeconds);

//initializations
String timeStamp;
String dateStamp;

//weather settings
String OPEN_WEATHER_MAP_LANGUAGE = "en";
String OPEN_WEATHER_MAP_APPID = "ed968bb7af1fb709bbd8c3b95992fe87";
String OPEN_WEATHER_MAP_LOCATION = "Trenton,NJ,US";
const boolean IS_METRIC = false;

//create weather objects
OpenWeatherMapCurrentData currentWeather;
OpenWeatherMapForecastData forecasts[MAX_FORECAST];

void connectWifi() {
  if (WiFi.status() == WL_CONNECTED) return;
  Serial.print(WIFI_SSID);
  Serial.print("/");
  Serial.println(WIFI_PASS);
  Serial.println("Connecting to the WiFi");
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected!");
}

void updateWeatherData() {
  //current weather
  OpenWeatherMapCurrent *currentWeatherClient = new OpenWeatherMapCurrent();
  currentWeatherClient->setMetric(IS_METRIC); //when using a pointer use -> instead of .(as in serial.print)
  currentWeatherClient->setLanguage(OPEN_WEATHER_MAP_LANGUAGE);
  currentWeatherClient->updateCurrent(&currentWeather, OPEN_WEATHER_MAP_APPID, OPEN_WEATHER_MAP_LOCATION);
  delete currentWeatherClient;
  currentWeatherClient = nullptr;
  //forecast weather
  OpenWeatherMapForecast *forecastClient = new OpenWeatherMapForecast();
  forecastClient->setMetric(IS_METRIC);
  forecastClient->setLanguage(OPEN_WEATHER_MAP_LANGUAGE);
  forecastClient->updateForecasts(forecasts, OPEN_WEATHER_MAP_APPID, OPEN_WEATHER_MAP_LOCATION, MAX_FORECAST);
  delete forecastClient;
  forecastClient = nullptr;

  delay(100);
}

void setup() {
  Serial.begin(115200);
  Serial.print("\n\n\n");
  connectWifi();
  updateWeatherData();
  timeClient.begin();
}

void loop() {
  while (!timeClient.forceUpdate()) {
    timeClient.forceUpdate();
  }
  if (millis() % 3600000 < 1500) {
    updateWeatherData();
  }

  timeStamp = timeClient.getFormattedTime();
  dateStamp = timeClient.getFormattedDate();
  
  Serial.println("Time: " + timeStamp);
  Serial.println("Date: " + dateStamp);
  Serial.println("Temp: " + String(int(round(currentWeather.temp))) + "ºF");
  Serial.println("3 hour forecast");
  Serial.println("Temp: " + String(int(round(forecasts[0].temp))) + "ºF");
  Serial.println("6 hour forecast");
  Serial.println("Temp: " + String(int(round(forecasts[1].temp))) + "ºF");
  Serial.println("9 hour forecast");
  Serial.println("Temp: " + String(int(round(forecasts[2].temp))) + "ºF");
  
  Serial.println("-------------------------------------");
  delay(1000);
}
