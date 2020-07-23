#define BAR_WIDTH 100
#define BAR_HEIGHT 37

const PROGMEM uint16_t barBitmap[BAR_WIDTH * BAR_HEIGHT] = {
0x8BEE, 0x7B6C, 0x5228, 0x7B4C, 0x940E, 0x7B4B, 0x9C2F, 0x9C2F, 0x7B4B, 0x8BEE, 0x6AEA, 0x49C5, 0x8BCD, 0xB532, 0x9C4F, 0x7B2A,   // 0x0010 (16) pixels
0x8BAD, 0x7B4B, 0x7B6C, 0x7B8C, 0x49E6, 0x6289, 0x9C2F, 0x83AD, 0x49C6, 0x62A9, 0x83CD, 0x732A, 0x8BED, 0xB512, 0x940E, 0x730A,   // 0x0020 (32) pixels
0x838C, 0x732B, 0x838D, 0x7B6C, 0x41A6, 0x62CA, 0x944F, 0x7B6C, 0x41A5, 0x6AEA, 0x838D, 0x6AEA, 0x9C4F, 0xACF1, 0x836C, 0x7B2B,   // 0x0030 (48) pixels
0x838C, 0x730A, 0x83AD, 0x6AEA, 0x3964, 0x7B4C, 0x942F, 0x730A, 0x7B6C, 0x7B4B, 0x730A, 0xACB1, 0x9C50, 0x5248, 0x41A6, 0x732B,   // 0x0040 (64) pixels
0x730B, 0x6ACA, 0x7B6D, 0x5207, 0x41A5, 0x83AD, 0x83AD, 0x62A9, 0x7B8C, 0x62C9, 0x7B8C, 0xA4D1, 0x83CE, 0x3985, 0x4A07, 0x736C,   // 0x0050 (80) pixels
0x5AA9, 0x6B0A, 0x732C, 0x3985, 0x4A07, 0x83CD, 0x732B, 0x62C9, 0x9C90, 0x944F, 0x5A68, 0x734C, 0x6B0B, 0x2903, 0x5248, 0x736C,   // 0x0060 (96) pixels
0x4A07, 0x2924, 0x732B, 0x6B2B, 0x8BEE, 0x7B8C, 0x5227, 0x732C, 0x93EE, 0x7B4B, 0x9C2F, 0x942F, 0x7B4C, 0x8BEE, 0x72EA, 0x49C5,   // 0x0070 (112) pixels
0x8BCD, 0xB532, 0x9C4F, 0x7B4B, 0x8BAD, 0x7B4B, 0x7B6C, 0x7B8C, 0x49E6, 0x6289, 0x9C2F, 0x8BCD, 0x49C6, 0x62A9, 0x8BCD, 0x732B,   // 0x0080 (128) pixels
0x8BED, 0xB512, 0x940E, 0x730A, 0x83AC, 0x732B, 0x838C, 0x7B6C, 0x41A6, 0x62CA, 0x942F, 0x734B, 0x41A5, 0x6AEA, 0x838D, 0x6AEA,   // 0x0090 (144) pixels
0x942E, 0xACF1, 0x836C, 0x732B, 0x838D, 0x730A, 0x83AD, 0x6AEA, 0x3964, 0x7B4C, 0x940F, 0x730A, 0x7B6C, 0x734B, 0x730A, 0xA4B1,   // 0x00A0 (160) pixels
0x9C50, 0x5248, 0x41A5, 0x732B, 0x730B, 0x6ACA, 0x7B6D, 0x5227, 0x41A5, 0x83AD, 0x83AD, 0x62A9, 0x7B8C, 0x62A9, 0x838C, 0xA4B1,   // 0x00B0 (176) pixels
0x83AD, 0x3985, 0x4A07, 0x736C, 0x62A9, 0x6AEA, 0x732C, 0x3985, 0x4A07, 0x83CE, 0x734B, 0x62A9, 0x9C70, 0x944F, 0x5A68, 0x734C,   // 0x00C0 (192) pixels
0x6AEB, 0x2923, 0x5248, 0x734C, 0x4A07, 0x2923, 0x6B2B, 0x6B0B, 0x83CD, 0x7B8C, 0x5227, 0x732B, 0x8BEE, 0x7B4B, 0x9C2F, 0x942F,   // 0x00D0 (208) pixels
0x7B6C, 0x8BEE, 0x730B, 0x49E5, 0x83AC, 0xB512, 0x9C6F, 0x7B4B, 0x8BCD, 0x7B4B, 0x7B6C, 0x838C, 0x51E6, 0x6289, 0x942E, 0x8BCD,   // 0x00E0 (224) pixels
0x49C6, 0x62A9, 0x8BCD, 0x7B4B, 0x8BED, 0xB512, 0x942E, 0x730A, 0x83AD, 0x732B, 0x7B8C, 0x7B6C, 0x41A6, 0x6ACA, 0x942F, 0x734C,   // 0x00F0 (240) pixels
0x41A5, 0x6AEA, 0x838D, 0x6AEA, 0x942E, 0xACF1, 0x836C, 0x732B, 0x838C, 0x730A, 0x83AD, 0x6ACA, 0x3964, 0x734C, 0x940F, 0x730A,   // 0x0100 (256) pixels
0x7B6C, 0x7B4B, 0x730A, 0xA490, 0x9C50, 0x5248, 0x41A5, 0x732C, 0x732B, 0x6ACA, 0x7B6D, 0x5227, 0x41A5, 0x83AC, 0x83AD, 0x62A9,   // 0x0110 (272) pixels
0x7B8C, 0x62A9, 0x83AC, 0xA4B1, 0x83AD, 0x39A5, 0x49E6, 0x736C, 0x62C9, 0x6AEA, 0x6B2B, 0x3985, 0x4A07, 0x83CE, 0x732B, 0x5A88,   // 0x0120 (288) pixels
0x9C6F, 0x9C4F, 0x5A88, 0x732B, 0x6AEA, 0x2923, 0x5268, 0x734C, 0x4A07, 0x3124, 0x732C, 0x732B, 0x83CD, 0x7B8C, 0x5207, 0x732B,   // 0x0130 (304) pixels
0x8BEE, 0x7B4B, 0x942F, 0x942F, 0x7B6C, 0x8BEE, 0x730B, 0x49C6, 0x83AC, 0xB511, 0x9C6F, 0x7B4B, 0x8BCD, 0x7B4B, 0x7B4C, 0x83AD,   // 0x0140 (320) pixels
0x5207, 0x6288, 0x940E, 0x8BCD, 0x49C6, 0x62A9, 0x8BCD, 0x7B4B, 0x8BCD, 0xB512, 0x942E, 0x732A, 0x83AD, 0x732B, 0x7B8C, 0x7B4C,   // 0x0150 (336) pixels
0x41A6, 0x62CA, 0x942F, 0x734B, 0x4185, 0x6ACA, 0x838D, 0x6AEA, 0x942E, 0xACF1, 0x838C, 0x732B, 0x838C, 0x6AEA, 0x83AD, 0x6ACA,   // 0x0160 (352) pixels
0x3964, 0x734C, 0x940F, 0x72EA, 0x7B6C, 0x734B, 0x730A, 0xA490, 0x9C70, 0x5A48, 0x4185, 0x734C, 0x732B, 0x6AEA, 0x7B8D, 0x5227,   // 0x0170 (368) pixels
0x41A5, 0x83AC, 0x838D, 0x62A9, 0x7B8C, 0x62C9, 0x838C, 0xA490, 0x83AD, 0x39A5, 0x49E6, 0x736C, 0x62A9, 0x6B0B, 0x6B2B, 0x3965,   // 0x0180 (384) pixels
0x4A27, 0x83EE, 0x732B, 0x62A8, 0x9C4F, 0x944F, 0x5A89, 0x732B, 0x62CA, 0x2923, 0x5268, 0x734C, 0x4A07, 0x3123, 0x732B, 0x6B2B,   // 0x0190 (400) pixels
0x83CD, 0x7B8C, 0x5207, 0x732B, 0x940E, 0x7B6B, 0x942F, 0x9C2F, 0x7B6C, 0x8BEE, 0x6B0B, 0x49E6, 0x83AC, 0xB511, 0x9C6F, 0x7B2B,   // 0x01A0 (416) pixels
0x8BCD, 0x7B6C, 0x7B6C, 0x83AD, 0x5227, 0x6268, 0x940E, 0x8BCD, 0x49C6, 0x62A9, 0x83CD, 0x7B4B, 0x8BCD, 0xB512, 0x942E, 0x732B,   // 0x01B0 (432) pixels
0x83AD, 0x732B, 0x7B8D, 0x7B4C, 0x41A6, 0x62CA, 0x942F, 0x734C, 0x4185, 0x6ACA, 0x838D, 0x72EA, 0x942F, 0xACF1, 0x838C, 0x732B,   // 0x01C0 (448) pixels
0x838C, 0x6AEA, 0x83AC, 0x6AEA, 0x3964, 0x734C, 0x8C0E, 0x6AEA, 0x7B4C, 0x734B, 0x730A, 0xA490, 0x9C70, 0x5A68, 0x4185, 0x734C,   // 0x01D0 (464) pixels
0x732B, 0x6AEA, 0x7B8C, 0x5227, 0x41A4, 0x7B8C, 0x838C, 0x62A9, 0x7B6C, 0x6AE9, 0x7B8C, 0xA4B0, 0x83CD, 0x3985, 0x4A06, 0x736C,   // 0x01E0 (480) pixels
0x62A9, 0x6B0B, 0x732B, 0x3965, 0x4A07, 0x83CE, 0x732B, 0x62A9, 0x9C4F, 0x944F, 0x5A88, 0x732B, 0x62EA, 0x2923, 0x5268, 0x736C,   // 0x01F0 (496) pixels
0x4A07, 0x3123, 0x732B, 0x6B2B, 0x83CD, 0x7B8D, 0x4A07, 0x732B, 0x940E, 0x7B6B, 0x940F, 0x9C2F, 0x7B6C, 0x8BEE, 0x730B, 0x49E6,   // 0x0200 (512) pixels
0x838C, 0xB512, 0x9C4F, 0x732A, 0x8BAD, 0x7B6B, 0x7B6C, 0x83AD, 0x5227, 0x5A68, 0x940E, 0x8BCD, 0x49E6, 0x5A89, 0x83CD, 0x7B4B,   // 0x0210 (528) pixels
0x8BCD, 0xB512, 0x9C2F, 0x732B, 0x83AD, 0x732B, 0x7B8D, 0x7B4C, 0x41A6, 0x62CA, 0x942F, 0x7B4C, 0x41A6, 0x6ACA, 0x83AD, 0x730A,   // 0x0220 (544) pixels
0x940E, 0xACF2, 0x838D, 0x732B, 0x836C, 0x6AEA, 0x83AC, 0x6AEA, 0x3964, 0x734C, 0x8C0E, 0x6AEA, 0x7B4C, 0x732B, 0x730A, 0xA490,   // 0x0230 (560) pixels
0x9C70, 0x5A68, 0x41A5, 0x734B, 0x732A, 0x6AE9, 0x7B8C, 0x5247, 0x41A4, 0x83AC, 0x838C, 0x62A9, 0x7B8C, 0x6AE9, 0x7B6B, 0xA4B0,   // 0x0240 (576) pixels
0x83CD, 0x3985, 0x4A06, 0x736C, 0x62C9, 0x6B0A, 0x732C, 0x3965, 0x4A06, 0x83CE, 0x734B, 0x62A9, 0x9C6F, 0x942F, 0x5A88, 0x732B,   // 0x0250 (592) pixels
0x6AEA, 0x3123, 0x5268, 0x736C, 0x4A27, 0x3124, 0x732B, 0x6B2B, 0x83CD, 0x838D, 0x4A07, 0x732B, 0x8BEE, 0x7B6B, 0x940F, 0x942F,   // 0x0260 (608) pixels
0x7B4B, 0x8BEE, 0x730B, 0x49E6, 0x838C, 0xACF1, 0x9C6F, 0x732B, 0x8BCD, 0x7B6C, 0x7B6C, 0x83AD, 0x5227, 0x5A68, 0x940E, 0x8BED,   // 0x0270 (624) pixels
0x49E6, 0x5A89, 0x83CD, 0x7B4B, 0x8BCD, 0xB512, 0x9C2F, 0x732A, 0x83AD, 0x7B2B, 0x838D, 0x7B4C, 0x41A6, 0x62CA, 0x942F, 0x7B6C,   // 0x0280 (640) pixels
0x41A5, 0x6ACA, 0x83AD, 0x730A, 0x940E, 0xACF1, 0x838D, 0x732B, 0x836C, 0x6AEA, 0x83AC, 0x6AEA, 0x3964, 0x734C, 0x8C0E, 0x6B0A,   // 0x0290 (656) pixels
0x7B4C, 0x732B, 0x730A, 0xA490, 0x9C70, 0x5A68, 0x4185, 0x734B, 0x730A, 0x6AEA, 0x7B8C, 0x5227, 0x41A4, 0x83AC, 0x83AC, 0x62A8,   // 0x02A0 (672) pixels
0x7B6C, 0x6AC9, 0x7B6B, 0xA490, 0x83CE, 0x3985, 0x41E6, 0x736C, 0x62C9, 0x6B0A, 0x732B, 0x3965, 0x49E6, 0x83CE, 0x734B, 0x62A9,   // 0x02B0 (688) pixels
0x9C6F, 0x942F, 0x5A68, 0x732B, 0x62EA, 0x3143, 0x5268, 0x734C, 0x4A07, 0x3123, 0x732B, 0x6B2B, 0x83CD, 0x83AD, 0x4A07, 0x730B,   // 0x02C0 (704) pixels
0x8BEE, 0x7B6B, 0x940F, 0x942F, 0x734B, 0x8BEE, 0x732B, 0x49E6, 0x7B6B, 0xACF1, 0x9C6F, 0x7B4B, 0x8BCD, 0x7B8C, 0x7B6C, 0x83AD,   // 0x02D0 (720) pixels
0x5227, 0x5A68, 0x940E, 0x8BED, 0x49E6, 0x5A89, 0x8BCD, 0x7B4B, 0x8BCD, 0xB512, 0x9C2F, 0x730A, 0x83AD, 0x7B2B, 0x838D, 0x7B4C,   // 0x02E0 (736) pixels
0x41A6, 0x62CA, 0x942F, 0x7B6C, 0x4185, 0x6ACA, 0x83AD, 0x72EA, 0x940E, 0xACF1, 0x838D, 0x732B, 0x838C, 0x6AEA, 0x83AC, 0x6AEA,   // 0x02F0 (752) pixels
0x3964, 0x734C, 0x940E, 0x6B0A, 0x7B6C, 0x732B, 0x730A, 0xA490, 0x9C4F, 0x5A68, 0x4185, 0x734B, 0x730A, 0x6AEA, 0x7B8D, 0x5227,   // 0x0300 (768) pixels
0x41A4, 0x83AC, 0x83AC, 0x62A8, 0x7B6C, 0x62A9, 0x7B6B, 0x9C90, 0x83CD, 0x39A5, 0x41C6, 0x736C, 0x62A9, 0x6B0B, 0x6B2B, 0x3164,   // 0x0310 (784) pixels
0x4A07, 0x83EE, 0x732B, 0x62A9, 0x9C6F, 0x942F, 0x5A68, 0x6B0B, 0x62EA, 0x3144, 0x5268, 0x734C, 0x4A27, 0x3124, 0x732C, 0x732B,   // 0x0320 (800) pixels
0x83CD, 0x7B8D, 0x4A07, 0x730B, 0x8BCD, 0x7B4B, 0x940E, 0x940F, 0x734B, 0x8BEE, 0x730B, 0x41A5, 0x838C, 0xACF1, 0x9C6F, 0x732B,   // 0x0330 (816) pixels
0x8BCD, 0x7B6C, 0x7B6C, 0x7B8C, 0x5227, 0x5A48, 0x8BEE, 0x83CD, 0x49E6, 0x5A89, 0x83AD, 0x732A, 0x8BCD, 0xB512, 0x942E, 0x732A,   // 0x0340 (832) pixels
0x83AD, 0x7B4B, 0x836C, 0x7B6C, 0x41A6, 0x6ACA, 0x942F, 0x7B6C, 0x41A5, 0x62CA, 0x83AD, 0x730A, 0x940E, 0xACF1, 0x838C, 0x732B,   // 0x0350 (848) pixels
0x838C, 0x6AEA, 0x7B8C, 0x6AEA, 0x3964, 0x734C, 0x940E, 0x6B0A, 0x7B6C, 0x734B, 0x730A, 0xA4B0, 0x9C4F, 0x5248, 0x41A5, 0x734B,   // 0x0360 (864) pixels
0x6B0A, 0x6AE9, 0x7B6C, 0x5207, 0x41C5, 0x83AC, 0x83AD, 0x6289, 0x7B6C, 0x6AC9, 0x7B6B, 0xA490, 0x83AD, 0x3985, 0x41E6, 0x736C,   // 0x0370 (880) pixels
0x62A9, 0x6B2B, 0x6B0B, 0x3144, 0x4A27, 0x83CE, 0x732B, 0x62C9, 0x9C6F, 0x942F, 0x5A88, 0x6B0B, 0x6AEA, 0x3144, 0x5268, 0x734C,   // 0x0380 (896) pixels
0x4A07, 0x3124, 0x732C, 0x6B2B, 0x83AD, 0x7B6C, 0x49E7, 0x730B, 0x8BCD, 0x7B4B, 0x940E, 0x942F, 0x732B, 0x8BED, 0x730B, 0x41C5,   // 0x0390 (912) pixels
0x838C, 0xACF1, 0x9C6F, 0x732B, 0x83AD, 0x7B4B, 0x734B, 0x7B8C, 0x5227, 0x5A48, 0x8BEE, 0x83CD, 0x49E6, 0x5A89, 0x83AD, 0x7B4B,   // 0x03A0 (928) pixels
0x8BCD, 0xB512, 0x942E, 0x732A, 0x83AD, 0x732B, 0x7B6C, 0x7B6C, 0x41A5, 0x62AA, 0x942F, 0x7B6C, 0x41A5, 0x6ACA, 0x83AD, 0x6AEA,   // 0x03B0 (944) pixels
0x940E, 0xACF1, 0x836C, 0x730B, 0x838C, 0x6AEA, 0x7B8C, 0x6AEA, 0x3964, 0x734C, 0x8C0E, 0x6B0A, 0x7B6C, 0x734B, 0x730A, 0xA490,   // 0x03C0 (960) pixels
0x9C4F, 0x5248, 0x41A5, 0x734C, 0x730A, 0x6ACA, 0x7B6C, 0x5207, 0x41A5, 0x7B8C, 0x83AD, 0x62A9, 0x7B6C, 0x62A9, 0x7B4B, 0xA490,   // 0x03D0 (976) pixels
0x83AD, 0x39A5, 0x4A06, 0x736C, 0x62CA, 0x6B0B, 0x6B0B, 0x3964, 0x5227, 0x83CE, 0x732B, 0x62C9, 0x9C6F, 0x942F, 0x5A88, 0x730B,   // 0x03E0 (992) pixels
0x6B0A, 0x3123, 0x5268, 0x734C, 0x4A27, 0x3124, 0x732B, 0x6B0B, 0x83AD, 0x7B6C, 0x49E6, 0x730B, 0x8BCD, 0x734B, 0x8C0E, 0x942F,   // 0x03F0 (1008) pixels
0x732B, 0x8BCD, 0x732B, 0x41A5, 0x7B6B, 0xACF1, 0x9C6F, 0x730A, 0x838C, 0x7B4B, 0x734B, 0x7B8C, 0x5207, 0x5A48, 0x8BEE, 0x8BCD,   // 0x0400 (1024) pixels
0x49E6, 0x5A89, 0x83CD, 0x7B4B, 0x8BCD, 0xB4F2, 0x942E, 0x732A, 0x83AD, 0x732B, 0x7B6C, 0x7B6C, 0x41A5, 0x62A9, 0x942F, 0x7B6B,   // 0x0410 (1040) pixels
0x41A5, 0x6ACA, 0x83AD, 0x6AEA, 0x940E, 0xACF1, 0x836C, 0x730B, 0x83AC, 0x6B0A, 0x7B8C, 0x6AEA, 0x3964, 0x734C, 0x8C0E, 0x6AEA,   // 0x0420 (1056) pixels
0x7B4C, 0x734B, 0x730A, 0xA490, 0x9C4F, 0x5248, 0x3985, 0x734C, 0x732B, 0x6AC9, 0x7B6C, 0x5207, 0x41A5, 0x7B8C, 0x83AD, 0x62C9,   // 0x0430 (1072) pixels
0x7B6C, 0x62A9, 0x7B4B, 0xA4B1, 0x83AD, 0x3985, 0x49E6, 0x736C, 0x62C9, 0x6B0B, 0x6B0B, 0x3964, 0x4A27, 0x83CE, 0x732B, 0x62A9,   // 0x0440 (1088) pixels
0x9C6F, 0x942F, 0x5A68, 0x732B, 0x6B0B, 0x2923, 0x5247, 0x734C, 0x4A27, 0x2924, 0x6B0B, 0x6B0B, 0x83CD, 0x7B6C, 0x49E7, 0x730B,   // 0x0450 (1104) pixels
0x83CD, 0x734B, 0x8BEE, 0x942F, 0x732A, 0x83CD, 0x730B, 0x4185, 0x732A, 0xACD1, 0x9C6F, 0x730A, 0x7B6C, 0x734B, 0x734B, 0x7B8D,   // 0x0460 (1120) pixels
0x5207, 0x5227, 0x940E, 0x8BEE, 0x5207, 0x5A89, 0x83AD, 0x7B4B, 0x8BAD, 0xACF1, 0x9C2F, 0x732B, 0x83AD, 0x732B, 0x7B6C, 0x7B6C,   // 0x0470 (1136) pixels
0x41A6, 0x6289, 0x942E, 0x7B6B, 0x41A5, 0x62C9, 0x83AD, 0x730A, 0x940E, 0xACF1, 0x838C, 0x730B, 0x83AD, 0x6B0A, 0x7B8C, 0x6AEA,   // 0x0480 (1152) pixels
0x3964, 0x732B, 0x8BEE, 0x6AEA, 0x734C, 0x734B, 0x6AEA, 0x9C70, 0x9C4F, 0x5A48, 0x3964, 0x734B, 0x732B, 0x62CA, 0x7B6C, 0x5227,   // 0x0490 (1168) pixels
0x3985, 0x7B8C, 0x83AD, 0x62CA, 0x7B8C, 0x62A9, 0x7B4B, 0xA4B1, 0x83AD, 0x3985, 0x41E6, 0x734C, 0x62C9, 0x6B0A, 0x6B0B, 0x3164,   // 0x04A0 (1184) pixels
0x4A07, 0x83CE, 0x732B, 0x5A88, 0x9C6F, 0x942F, 0x5A88, 0x732B, 0x6B0B, 0x2903, 0x5227, 0x734C, 0x4A27, 0x2923, 0x6B0B, 0x6B0B,   // 0x04B0 (1200) pixels
0x83CD, 0x7B8C, 0x4A07, 0x6B0B, 0x83CD, 0x734B, 0x8BEE, 0x942F, 0x730A, 0x83AD, 0x732B, 0x4184, 0x732A, 0xACD1, 0x9C4F, 0x730A,   // 0x04C0 (1216) pixels
0x7B6C, 0x734B, 0x732B, 0x7B8D, 0x5207, 0x5227, 0x8BEE, 0x8BEE, 0x5227, 0x5A69, 0x83AD, 0x7B4B, 0x83AC, 0xACF1, 0x9C2F, 0x730A,   // 0x04D0 (1232) pixels
0x838D, 0x7B4B, 0x7B6C, 0x7B8D, 0x49C6, 0x62A9, 0x940E, 0x7B8C, 0x41A5, 0x62A9, 0x83AD, 0x730A, 0x8BED, 0xACF1, 0x83AD, 0x730A,   // 0x04E0 (1248) pixels
0x83AC, 0x6B0A, 0x836C, 0x6AEA, 0x3964, 0x732B, 0x8C0E, 0x6AEA, 0x734C, 0x7B4B, 0x6AEA, 0x9C70, 0x9C4F, 0x5A68, 0x3964, 0x732B,   // 0x04F0 (1264) pixels
0x732B, 0x62C9, 0x7B6C, 0x5227, 0x3984, 0x7B8C, 0x83AD, 0x62A9, 0x7B6C, 0x62A9, 0x734B, 0xA491, 0x83AD, 0x3985, 0x41E6, 0x736C,   // 0x0500 (1280) pixels
0x62C9, 0x6AEA, 0x6B0B, 0x3964, 0x49E6, 0x83CE, 0x732B, 0x5A88, 0x9C4F, 0x942F, 0x5A88, 0x732B, 0x6B0B, 0x2903, 0x4A27, 0x734C,   // 0x0510 (1296) pixels
0x4A27, 0x2923, 0x732C, 0x6B2B, 0x7BAD, 0x7B6C, 0x49E6, 0x6AEB, 0x83CD, 0x732B, 0x8BEE, 0x942F, 0x6B0A, 0x83AD, 0x732B, 0x41A5,   // 0x0520 (1312) pixels
0x732A, 0xACD1, 0x9C4F, 0x730A, 0x838C, 0x734B, 0x730B, 0x7B6C, 0x5227, 0x5227, 0x8BEE, 0x8BEE, 0x5227, 0x5A68, 0x838D, 0x7B4B,   // 0x0530 (1328) pixels
0x838C, 0xACF1, 0x942F, 0x6AEA, 0x838C, 0x7B2B, 0x7B6C, 0x7B8D, 0x49C6, 0x6289, 0x940E, 0x83AC, 0x41A5, 0x62A9, 0x83AD, 0x730A,   // 0x0540 (1344) pixels
0x8BCD, 0xACD1, 0x83AD, 0x6AEA, 0x838D, 0x6B0A, 0x7B6C, 0x6AEA, 0x3964, 0x732B, 0x8C0E, 0x6B0A, 0x734B, 0x734B, 0x6AEA, 0x9C70,   // 0x0550 (1360) pixels
0x9C4F, 0x5A68, 0x3944, 0x732B, 0x732B, 0x62C9, 0x7B6C, 0x5248, 0x3964, 0x7B6C, 0x83AD, 0x62A9, 0x7B4C, 0x62A9, 0x734B, 0xA490,   // 0x0560 (1376) pixels
0x83AD, 0x3985, 0x41E6, 0x734C, 0x62CA, 0x6AEA, 0x6B0B, 0x3985, 0x4A06, 0x83CD, 0x732B, 0x5A88, 0x9C4F, 0x942F, 0x5A89, 0x732B,   // 0x0570 (1392) pixels
0x6B0B, 0x2903, 0x4A27, 0x734C, 0x4A27, 0x2923, 0x6B2B, 0x6B2B, 0x7B8C, 0x736C, 0x41C6, 0x62AA, 0x83AD, 0x732A, 0x83CD, 0x940F,   // 0x0580 (1408) pixels
0x6AEA, 0x7B8C, 0x730B, 0x41A5, 0x732A, 0xACD1, 0x9C6F, 0x732B, 0x838D, 0x7B4C, 0x730B, 0x7B8C, 0x5227, 0x5227, 0x8BCE, 0x8BCD,   // 0x0590 (1424) pixels
0x4A07, 0x5248, 0x838C, 0x732B, 0x838C, 0xACD1, 0x942F, 0x6AEA, 0x7B6C, 0x730B, 0x734B, 0x7B6C, 0x41A6, 0x5A48, 0x8BEE, 0x7B8C,   // 0x05A0 (1440) pixels
0x41A5, 0x62A9, 0x83AD, 0x6B0A, 0x8BCD, 0xACD1, 0x83AD, 0x72EA, 0x838C, 0x6B0A, 0x7B6C, 0x6AEA, 0x3964, 0x730B, 0x8C0E, 0x6B0A,   // 0x05B0 (1456) pixels
0x732B, 0x734B, 0x6AEA, 0x9C70, 0x944F, 0x5A68, 0x3944, 0x732B, 0x732B, 0x62C9, 0x7B6C, 0x5248, 0x3944, 0x7B6C, 0x83AD, 0x6289,   // 0x05C0 (1472) pixels
0x7B6C, 0x62C9, 0x734B, 0x9C90, 0x83CD, 0x39A5, 0x41C6, 0x734B, 0x62C9, 0x6AEA, 0x730B, 0x3985, 0x49E6, 0x83CD, 0x732B, 0x5A68,   // 0x05D0 (1488) pixels
0x944F, 0x942F, 0x5A89, 0x730B, 0x6B0B, 0x3123, 0x5247, 0x734C, 0x5228, 0x2903, 0x6B0A, 0x6B0B, 0x736C, 0x734C, 0x4186, 0x5A89,   // 0x05E0 (1504) pixels
0x838D, 0x730A, 0x83AD, 0x8C0E, 0x6AEA, 0x7B6C, 0x6B0B, 0x4184, 0x730A, 0xACD1, 0x9C6F, 0x7B2B, 0x83AD, 0x7B6C, 0x732B, 0x7B8D,   // 0x05F0 (1520) pixels
0x5228, 0x5227, 0x8BCE, 0x8BCE, 0x4A07, 0x5248, 0x838C, 0x732B, 0x7B6C, 0xACD1, 0x942F, 0x6AEA, 0x838D, 0x730B, 0x734B, 0x7B6C,   // 0x0600 (1536) pixels
0x4185, 0x5A48, 0x8BEE, 0x7B8C, 0x4185, 0x6289, 0x838D, 0x6AE9, 0x8BCD, 0xACD1, 0x83AD, 0x730A, 0x838C, 0x6B0A, 0x7B6C, 0x6AEA,   // 0x0610 (1552) pixels
0x3964, 0x6B0B, 0x8C0F, 0x730A, 0x732B, 0x732B, 0x6AEA, 0xA490, 0x944F, 0x5A68, 0x3944, 0x730B, 0x732B, 0x62C9, 0x7B6C, 0x5248,   // 0x0620 (1568) pixels
0x3144, 0x7B6C, 0x83AD, 0x6289, 0x7B4C, 0x62C9, 0x734B, 0x9C90, 0x83CE, 0x41A5, 0x41C6, 0x734B, 0x62C9, 0x6AEA, 0x732B, 0x3985,   // 0x0630 (1584) pixels
0x49E6, 0x83AD, 0x732B, 0x5A68, 0x942F, 0x944F, 0x6289, 0x6B0B, 0x6AEB, 0x3124, 0x5248, 0x734C, 0x5268, 0x2903, 0x6AEA, 0x6B0B,   // 0x0640 (1600) pixels
0x734B, 0x734C, 0x4185, 0x5A68, 0x7B8D, 0x6AEA, 0x83AD, 0x8BEE, 0x6AEA, 0x7B6C, 0x6B0A, 0x3984, 0x6AEA, 0xA490, 0xA490, 0x7B2B,   // 0x0650 (1616) pixels
0x83AD, 0x838D, 0x730B, 0x83AD, 0x5A68, 0x5227, 0x8BCD, 0x8BEE, 0x5227, 0x5227, 0x838C, 0x734B, 0x838C, 0xACD1, 0x9C4F, 0x732B,   // 0x0660 (1632) pixels
0x838D, 0x7B2B, 0x7B4C, 0x7B6C, 0x49C6, 0x5248, 0x8BEE, 0x7B8C, 0x4185, 0x5A68, 0x838C, 0x6AE9, 0x8BCD, 0xACD1, 0x8BAD, 0x72EA,   // 0x0670 (1648) pixels
0x838C, 0x6ACA, 0x7B6C, 0x730A, 0x3964, 0x6AEA, 0x8C0E, 0x730A, 0x732B, 0x734B, 0x6AEA, 0x9C70, 0x9450, 0x5A68, 0x3964, 0x730B,   // 0x0680 (1664) pixels
0x732B, 0x62A9, 0x734C, 0x5248, 0x3964, 0x7B4C, 0x83CE, 0x62A9, 0x7B6C, 0x6AEA, 0x732B, 0x9C70, 0x83CD, 0x3985, 0x41A5, 0x734B,   // 0x0690 (1680) pixels
0x62A9, 0x62C9, 0x6B0B, 0x3985, 0x41A6, 0x7B6D, 0x732B, 0x5A68, 0x944F, 0x942F, 0x6289, 0x6B0B, 0x6AEB, 0x3124, 0x4A28, 0x734C,   // 0x06A0 (1696) pixels
0x5248, 0x2903, 0x62EA, 0x6B2B, 0x732B, 0x734C, 0x3985, 0x5248, 0x7B6D, 0x6AEA, 0x838D, 0x8BEE, 0x6ACA, 0x7B6C, 0x6AEA, 0x3964,   // 0x06B0 (1712) pixels
0x6AEA, 0xA490, 0x9C6F, 0x730A, 0x838C, 0x7B8D, 0x730B, 0x83AD, 0x5A48, 0x4A06, 0x83AD, 0x8BCD, 0x5207, 0x5207, 0x7B8C, 0x732B,   // 0x06C0 (1728) pixels
0x7B6B, 0xA4D1, 0x944F, 0x6B0A, 0x838D, 0x7B2C, 0x7B4C, 0x7B6C, 0x49E6, 0x5A48, 0x8BEE, 0x838C, 0x41A5, 0x5A88, 0x838C, 0x6AE9,   // 0x06D0 (1744) pixels
0x8BAD, 0xACD1, 0x8BAD, 0x72EA, 0x836C, 0x6ACA, 0x7B6C, 0x730A, 0x3964, 0x6AEA, 0x8C0E, 0x6B0A, 0x732B, 0x734B, 0x6ACA, 0x9C70,   // 0x06E0 (1760) pixels
0x9C50, 0x5A88, 0x3964, 0x730B, 0x732B, 0x62A9, 0x734C, 0x5248, 0x3964, 0x7B4C, 0x83CE, 0x62A9, 0x7B4C, 0x6AEA, 0x732B, 0x9C70,   // 0x06F0 (1776) pixels
0x83CD, 0x3985, 0x3985, 0x732B, 0x62A9, 0x62C9, 0x6B0B, 0x3965, 0x41A6, 0x7B6D, 0x732B, 0x5A88, 0x942F, 0x942F, 0x5A89, 0x6B0B,   // 0x0700 (1792) pixels
0x6AEB, 0x2924, 0x4A07, 0x732C, 0x5248, 0x28E3, 0x62CA, 0x6B0B, 0x6B2B, 0x734B, 0x3985, 0x5228, 0x7B4C, 0x6ACA, 0x7B8D, 0x8BEE,   // 0x0710 (1808) pixels
0x6ACA, 0x7B6C, 0x6AEA, 0x3944, 0x6ACA, 0x9C70, 0x9C4F, 0x72E9, 0x7B4B, 0x7B4C, 0x6B0B, 0x7B8D, 0x5228, 0x49E6, 0x83AD, 0x8BCD,   // 0x0720 (1824) pixels
0x4A07, 0x49E7, 0x7B6C, 0x732B, 0x7B4B, 0xA4B1, 0x9C4F, 0x6AEA, 0x7B6C, 0x732B, 0x734C, 0x7B6C, 0x49E6, 0x5248, 0x8BEE, 0x7B8C,   // 0x0730 (1840) pixels
0x41A5, 0x5A68, 0x7B8C, 0x6AC9, 0x83AD, 0xACD1, 0x8BCD, 0x6AEA, 0x7B6C, 0x6ACA, 0x7B6C, 0x730B, 0x3964, 0x6ACA, 0x8BEE, 0x6B0A,   // 0x0740 (1856) pixels
0x732B, 0x734B, 0x62C9, 0x9C50, 0x9C50, 0x5A89, 0x3964, 0x6B0B, 0x732B, 0x62A9, 0x734C, 0x5248, 0x3144, 0x7B6C, 0x83CE, 0x62A9,   // 0x0750 (1872) pixels
0x734B, 0x62A9, 0x730B, 0x9C70, 0x83CD, 0x39A5, 0x3985, 0x732C, 0x62C9, 0x62CA, 0x6B0B, 0x3965, 0x41A5, 0x7B8D, 0x732B, 0x5A88,   // 0x0760 (1888) pixels
0x942E, 0x942F, 0x6289, 0x6B0B, 0x6AEB, 0x2903, 0x4A07, 0x6B2B, 0x5248, 0x2903, 0x62EB, 0x6B2B, 0x6B2B, 0x734B, 0x3985, 0x5228,   // 0x0770 (1904) pixels
0x7B6C, 0x6AEA, 0x7B8C, 0x8BEE, 0x6AEA, 0x7B6C, 0x6AEA, 0x3944, 0x6AA9, 0x9C70, 0x9C4F, 0x6AE9, 0x732B, 0x7B2B, 0x6AEA, 0x7B6C,   // 0x0780 (1920) pixels
0x5227, 0x41A5, 0x838C, 0x8BCD, 0x49E7, 0x49C6, 0x7B6C, 0x730A, 0x732A, 0xA4B1, 0x9C4F, 0x6ACA, 0x7B6C, 0x730B, 0x732B, 0x734C,   // 0x0790 (1936) pixels
0x41C6, 0x5227, 0x83CE, 0x7B8C, 0x3985, 0x5248, 0x7B6C, 0x6AC9, 0x83AD, 0xACD1, 0x8BCD, 0x6AEA, 0x7B6C, 0x6ACA, 0x7B4C, 0x6B0A,   // 0x07A0 (1952) pixels
0x3144, 0x62A9, 0x8BCE, 0x6AEA, 0x732B, 0x732B, 0x62A9, 0x942F, 0x9C50, 0x5A88, 0x3123, 0x6AEA, 0x730B, 0x62A9, 0x734C, 0x5227,   // 0x07B0 (1968) pixels
0x3124, 0x7B4C, 0x83CE, 0x6289, 0x732B, 0x62A9, 0x730A, 0x9C50, 0x83CE, 0x41A5, 0x3985, 0x732C, 0x62AA, 0x62CA, 0x6B0B, 0x3985,   // 0x07C0 (1984) pixels
0x41A6, 0x7B8D, 0x732B, 0x5A68, 0x942E, 0x942F, 0x5A89, 0x6B0B, 0x6AEB, 0x2924, 0x4A07, 0x6B2C, 0x4A28, 0x20E3, 0x62CA, 0x6B0B,   // 0x07D0 (2000) pixels
0x6B2B, 0x734C, 0x3985, 0x5228, 0x7B6C, 0x6AEA, 0x7B6C, 0x8BEE, 0x6AEA, 0x734B, 0x6B0A, 0x3944, 0x62A9, 0x9C90, 0x9C6F, 0x6AE9,   // 0x07E0 (2016) pixels
0x732B, 0x7B2B, 0x6AEA, 0x7B4C, 0x5207, 0x4185, 0x7B8C, 0x83CD, 0x49E6, 0x41C6, 0x7B4C, 0x730B, 0x730A, 0xA4B1, 0x9C4F, 0x6ACA,   // 0x07F0 (2032) pixels
0x7B6C, 0x730B, 0x6B0A, 0x732B, 0x41A6, 0x49E7, 0x83CE, 0x7B8D, 0x3964, 0x5227, 0x736C, 0x62C9, 0x83AD, 0xA4B1, 0x83AD, 0x6AC9,   // 0x0800 (2048) pixels
0x7B6C, 0x62CA, 0x732C, 0x6AEA, 0x3123, 0x5AA9, 0x83CE, 0x6AEA, 0x6B0A, 0x6B0A, 0x62A9, 0x942F, 0x9450, 0x5A89, 0x3123, 0x62CA,   // 0x0810 (2064) pixels
0x6B0B, 0x6289, 0x734C, 0x5228, 0x2903, 0x734C, 0x83AE, 0x5A89, 0x734B, 0x62A9, 0x730B, 0x9C70, 0x83CE, 0x39A5, 0x3985, 0x6B2B,   // 0x0820 (2080) pixels
0x62CA, 0x62CA, 0x6B2C, 0x3985, 0x41C6, 0x7B8D, 0x732B, 0x5A68, 0x8C0E, 0x942F, 0x5A89, 0x6AEB, 0x6AEB, 0x2924, 0x4A07, 0x6B2C,   // 0x0830 (2096) pixels
0x4A07, 0x20C2, 0x62CA, 0x6B0A, 0x6B2B, 0x734C, 0x3985, 0x5227, 0x7B6C, 0x6AEA, 0x7B6C, 0x8BEE, 0x6AEA, 0x734B, 0x6B0B, 0x3944,   // 0x0840 (2112) pixels
0x6289, 0x9C90, 0x9C70, 0x6AE9, 0x732B, 0x7B2B, 0x6AEA, 0x7B4C, 0x5207, 0x3985, 0x7B8C, 0x83CD, 0x49E7, 0x41C6, 0x7B4C, 0x730B,   // 0x0850 (2128) pixels
0x730A, 0xA4B0, 0x9C4F, 0x6AC9, 0x734C, 0x6B0B, 0x6B0A, 0x734C, 0x41C6, 0x49E7, 0x83AD, 0x7B8C, 0x3985, 0x4A27, 0x736C, 0x62C9,   // 0x0860 (2144) pixels
0x7B8D, 0xA4B1, 0x83AD, 0x6AC9, 0x7B4C, 0x62A9, 0x732B, 0x6ACA, 0x2923, 0x5AA9, 0x83EE, 0x6AEA, 0x6AEA, 0x6B0A, 0x62A9, 0x942F,   // 0x0870 (2160) pixels
0x9C70, 0x5A89, 0x2923, 0x62CA, 0x6B0B, 0x5A89, 0x734C, 0x5228, 0x2903, 0x734C, 0x83AD, 0x5A89, 0x734C, 0x62A9, 0x6B0B, 0x9C70,   // 0x0880 (2176) pixels
0x83CE, 0x39A5, 0x3985, 0x6B2B, 0x62CA, 0x62CA, 0x6B0B, 0x3965, 0x41A6, 0x7B8D, 0x734B, 0x5A88, 0x942F, 0x942F, 0x5A89, 0x6AEB,   // 0x0890 (2192) pixels
0x6AEB, 0x3124, 0x4A07, 0x732C, 0x4A27, 0x20E2, 0x62EA, 0x6B0B, 0x6B2B, 0x734C, 0x3985, 0x5227, 0x7B6C, 0x6AEA, 0x7B6C, 0x8BEE,   // 0x08A0 (2208) pixels
0x6AEA, 0x734B, 0x6B0B, 0x3144, 0x5A89, 0x9C90, 0x9C90, 0x6AEA, 0x732B, 0x7B2B, 0x6AEA, 0x7B4C, 0x5227, 0x4185, 0x7B8C, 0x83CE,   // 0x08B0 (2224) pixels
0x4A07, 0x41C6, 0x7B4C, 0x732B, 0x732A, 0xA490, 0x942F, 0x6AC9, 0x734C, 0x730B, 0x6B0A, 0x734C, 0x41C6, 0x49E7, 0x7BAD, 0x7B6C,   // 0x08C0 (2240) pixels
0x3985, 0x4A27, 0x736C, 0x62C9, 0x7B8C, 0xA491, 0x83AD, 0x6AC9, 0x7B6C, 0x62AA, 0x732B, 0x6AEA, 0x3123, 0x5AA9, 0x83EE, 0x6AEA,   // 0x08D0 (2256) pixels
0x6AEA, 0x732B, 0x62A9, 0x944F, 0x9C70, 0x5A89, 0x2903, 0x62CA, 0x6B0B, 0x5A89, 0x734C, 0x5248, 0x2903, 0x734C, 0x7B8D, 0x5A68,   // 0x08E0 (2272) pixels
0x732B, 0x62A9, 0x6B0B, 0x9C70, 0x83CE, 0x3985, 0x39A5, 0x734C, 0x62CA, 0x62EA, 0x6B2B, 0x3165, 0x41A6, 0x7B8D, 0x734C, 0x5A89,   // 0x08F0 (2288) pixels
0x944F, 0x942F, 0x5A89, 0x6B0B, 0x6AEB, 0x3124, 0x4A07, 0x6B2C, 0x4A27, 0x20E2, 0x62EA, 0x6B0A, 0x732B, 0x736C, 0x4185, 0x5227,   // 0x0900 (2304) pixels
0x7B6C, 0x6B0A, 0x7B6C, 0x8C0E, 0x6AEA, 0x7B6C, 0x6B0B, 0x3144, 0x6289, 0x9C90, 0x9C90, 0x730A, 0x732B, 0x7B4B, 0x730B, 0x7B6C,   // 0x0910 (2320) pixels
0x5248, 0x41A5, 0x7B8C, 0x83CD, 0x49E7, 0x41C6, 0x734C, 0x732B, 0x732B, 0xA4B0, 0x942F, 0x6ACA, 0x7B6C, 0x732B, 0x6B0A, 0x734B,   // 0x0920 (2336) pixels
0x41C6, 0x41C6, 0x7BAD, 0x7B8D, 0x3965, 0x4A27, 0x736C, 0x62C9, 0x7B8D, 0xA4B1, 0x8BCD, 0x6AC9, 0x7B6C, 0x6ACA, 0x732B, 0x6AEA,   // 0x0930 (2352) pixels
0x3123, 0x5AA9, 0x83EE, 0x62EA, 0x6B0A, 0x732B, 0x62C9, 0x944F, 0x9C70, 0x5A89, 0x2903, 0x62CA, 0x730B, 0x6289, 0x734C, 0x5248,   // 0x0940 (2368) pixels
0x2903, 0x734C, 0x7B8D, 0x5A68, 0x732B, 0x62C9, 0x6B0B, 0x9C70, 0x83CE, 0x3985, 0x39A5, 0x732C, 0x62EA, 0x6AEA, 0x732C, 0x3985,   // 0x0950 (2384) pixels
0x41A6, 0x83AD, 0x7B4C, 0x5A88, 0x944F, 0x942F, 0x5A89, 0x6AEB, 0x6AEB, 0x2924, 0x49E7, 0x6B0B, 0x4A28, 0x28E3, 0x62EA, 0x6B0B,   // 0x0960 (2400) pixels
0x732B, 0x7B6C, 0x41A6, 0x5248, 0x7B6C, 0x6B0B, 0x7B8C, 0x940E, 0x62C9, 0x7B4B, 0x732B, 0x3123, 0x62A9, 0x9C70, 0xA4B1, 0x730A,   // 0x0970 (2416) pixels
0x7B6B, 0x7B4B, 0x6AEA, 0x7B8D, 0x5248, 0x41C6, 0x83AD, 0x8BEE, 0x49E7, 0x49C6, 0x7B6C, 0x732B, 0x732A, 0xA4B1, 0x942F, 0x6AC9,   // 0x0980 (2432) pixels
0x7B4B, 0x732B, 0x730A, 0x732B, 0x41A6, 0x41E6, 0x83CD, 0x7B8C, 0x3965, 0x4A27, 0x7B6C, 0x6AE9, 0x838C, 0xA4B1, 0x83AD, 0x6AEA,   // 0x0990 (2448) pixels
0x7B6C, 0x62CA, 0x734C, 0x6AEA, 0x3123, 0x62CA, 0x8BCE, 0x6AEA, 0x730A, 0x734B, 0x62C9, 0x944F, 0x944F, 0x5A68, 0x3123, 0x6AEA,   // 0x09A0 (2464) pixels
0x732B, 0x6289, 0x7B6C, 0x5A48, 0x3123, 0x734C, 0x83AE, 0x6289, 0x734B, 0x62A9, 0x6B0A, 0x9C90, 0x83CE, 0x3985, 0x3985, 0x734C,   // 0x09B0 (2480) pixels
0x62CA, 0x6B0A, 0x732B, 0x3985, 0x41C6, 0x83AD, 0x7B4C, 0x5A88, 0x942F, 0x944F, 0x5A89, 0x6B0B, 0x6AEB, 0x2903, 0x4A07, 0x6B2C,   // 0x09C0 (2496) pixels
0x4A07, 0x20C2, 0x6AEB, 0x6AEB, 0x734B, 0x838D, 0x41A5, 0x5A48, 0x838D, 0x6AEA, 0x838C, 0x942F, 0x6B0A, 0x7B6C, 0x732B, 0x3103,   // 0x09D0 (2512) pixels
0x6289, 0xA470, 0xA490, 0x732B, 0x7B4B, 0x7B6C, 0x730B, 0x7B8D, 0x5A48, 0x41C6, 0x838C, 0x8BEE, 0x5207, 0x41C6, 0x7B8C, 0x732B,   // 0x09E0 (2528) pixels
0x732B, 0xACF1, 0x9C4F, 0x6AC9, 0x7B6C, 0x7B4B, 0x730A, 0x7B8C, 0x41A6, 0x41A5, 0x83CD, 0x83AD, 0x3964, 0x5227, 0x7B8C, 0x6AEA,   // 0x09F0 (2544) pixels
0x838C, 0xACD1, 0x8BCD, 0x6AE9, 0x7B6C, 0x6AC9, 0x7B4C, 0x6AEA, 0x3123, 0x62C9, 0x8BEE, 0x730A, 0x6B0A, 0x732B, 0x6288, 0x9C70,   // 0x0A00 (2560) pixels
0x9C70, 0x5A89, 0x2902, 0x6B0B, 0x734B, 0x6288, 0x7B6C, 0x5247, 0x3103, 0x7B4C, 0x83CE, 0x6289, 0x732B, 0x62A9, 0x730A, 0x9C90,   // 0x0A10 (2576) pixels
0x8BCE, 0x3985, 0x3164, 0x734B, 0x62C9, 0x62C9, 0x6B2B, 0x3964, 0x41C6, 0x8BCE, 0x734B, 0x5A47, 0x942F, 0x942F, 0x5A88, 0x6AEB,   // 0x0A20 (2592) pixels
0x6AEB, 0x28E2, 0x49E6, 0x732C, 0x4A07, 0x28C2, 0x6AEB, 0x6B0B, 0x7B4B, 0x838D, 0x49C6, 0x5A47, 0x838D, 0x7B2B, 0x83AC, 0x9C6F,   // 0x0A30 (2608) pixels
0x7B4B, 0x83AC, 0x7B6C, 0x41A5, 0x6AA9, 0xA4B1, 0xA4B1, 0x836C, 0x7B6C, 0x838C, 0x7B4B, 0x8BAD, 0x6289, 0x5206, 0x8BCD, 0x944F,   // 0x0A40 (2624) pixels
0x5A48, 0x49C6, 0x7B6C, 0x7B6B, 0x7B4B, 0xACF1, 0x9C70, 0x732B, 0x838C, 0x838C, 0x7B4B, 0x838C, 0x5207, 0x5227, 0x8C0E, 0x8BED,   // 0x0A50 (2640) pixels
0x49E6, 0x5A68, 0x83AC, 0x7B4B, 0x8BCD, 0xACF1, 0x940E, 0x7B2B, 0x8BAD, 0x730A, 0x838C, 0x7B4B, 0x41A5, 0x6AEA, 0x942F, 0x7B4B,   // 0x0A60 (2656) pixels
0x7B6B, 0x838C, 0x730A, 0x9C70, 0xA490, 0x6B0A, 0x41A5, 0x732B, 0x83AC, 0x730A, 0x838D, 0x62C9, 0x49E6, 0x83AD, 0x940E, 0x730A,   // 0x0A70 (2672) pixels
0x83AD, 0x7B4B, 0x7B6C, 0xA4B1, 0x942F, 0x5A68, 0x5227, 0x7B8D, 0x734B, 0x732B, 0x838D, 0x5247, 0x5A48, 0x940F, 0x83AD, 0x730A,   // 0x0A80 (2688) pixels
0xA470, 0xA490, 0x732B, 0x7B6C, 0x7B6D, 0x5207, 0x62A9, 0x838D, 0x62CA, 0x49E7, 0x7B6C, 0x838D, 0x9C2F, 0xA470, 0x838C, 0x838C,   // 0x0A90 (2704) pixels
0xA470, 0x9C4F, 0x9C4F, 0xACF1, 0xA490, 0x9C6F, 0xA470, 0x8BAD, 0x940F, 0xB513, 0xBD33, 0xA4B0, 0xA4B0, 0xA4B0, 0x9C4F, 0xA490,   // 0x0AA0 (2720) pixels
0x940E, 0x8BAD, 0xA4B0, 0xACF1, 0x93EE, 0x83AD, 0x9C6F, 0xA490, 0x9C6F, 0xB512, 0xB512, 0x9C4F, 0xA470, 0xA490, 0x9C6F, 0xA490,   // 0x0AB0 (2736) pixels
0x8BEE, 0x93EE, 0xACD1, 0xA4B0, 0x8BCD, 0x8BED, 0xA490, 0xA490, 0xA490, 0xB532, 0xACF1, 0x9C4F, 0xA490, 0x9C6F, 0xA490, 0x9C6F,   // 0x0AC0 (2752) pixels
0x8BED, 0x9C4F, 0xACD1, 0xA490, 0x9C6F, 0xA490, 0x9C6F, 0xACF1, 0xB512, 0x9C70, 0x8BEE, 0x9C4F, 0x9C70, 0x9C4F, 0x9C6F, 0x9C4F,   // 0x0AD0 (2768) pixels
0x8BED, 0xA490, 0xACD1, 0x9C6F, 0xA490, 0xA46F, 0x9C6F, 0xB512, 0xA4B1, 0x8BEE, 0x940E, 0x9C50, 0x9C6F, 0x9C70, 0xA491, 0x940E,   // 0x0AE0 (2784) pixels
0x93EE, 0xA4B1, 0xA4B0, 0xA490, 0xACD1, 0xACF1, 0x9C4F, 0x9C4F, 0xA470, 0x942F, 0x942F, 0x9C50, 0x942F, 0x940F, 0xA470, 0xA491,   // 0x0AF0 (2800) pixels
0xBD32, 0xBD53, 0xBD33, 0xBD12, 0xC573, 0xC573, 0xBD52, 0xC593, 0xC573, 0xBD53, 0xC574, 0xC574, 0xBD54, 0xC574, 0xBD53, 0xACF1,   // 0x0B00 (2816) pixels
0xACD1, 0xBD53, 0xBD53, 0xBD53, 0xBD73, 0xBD53, 0xBD72, 0xBD72, 0xBD53, 0xBD33, 0xBD53, 0xC573, 0xBD52, 0xBD53, 0xC573, 0xB512,   // 0x0B10 (2832) pixels
0xB512, 0xBD32, 0xBD53, 0xBD73, 0xBD53, 0xBD32, 0xBD32, 0xBD73, 0xBD53, 0xBD32, 0xBD52, 0xBD52, 0xBD32, 0xBD53, 0xBD53, 0xB4F1,   // 0x0B20 (2848) pixels
0xB512, 0xBD32, 0xBD32, 0xBD53, 0xBD53, 0xBD32, 0xBD32, 0xBD53, 0xBD53, 0xBD32, 0xBD53, 0xBD53, 0xBD32, 0xB512, 0xACF2, 0xA490,   // 0x0B30 (2864) pixels
0xACB0, 0xB511, 0xB512, 0xB532, 0xB512, 0xB512, 0xB532, 0xBD32, 0xB512, 0xBD32, 0xB512, 0xB532, 0xB512, 0xB512, 0xACD1, 0xA490,   // 0x0B40 (2880) pixels
0xACD1, 0xB512, 0xB512, 0xB4F2, 0xB512, 0xB4F2, 0xB512, 0xB512, 0xB511, 0xB4F1, 0xB512, 0xB4F2, 0xB4F2, 0xB512, 0xACD2, 0xACF2,   // 0x0B50 (2896) pixels
0xACD1, 0xB4F2, 0xB4F1, 0xB512, 0xC593, 0xCD94, 0xC594, 0xCD94, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDD4, 0xCDB3, 0xCDD4, 0xCDB4, 0xCDB4,   // 0x0B60 (2912) pixels
0xC5B4, 0xC553, 0xACB0, 0x940E, 0x8BED, 0x9C6F, 0xBD53, 0xC594, 0xC594, 0xC593, 0xCDB3, 0xCDB3, 0xCD94, 0xCDB4, 0xCD94, 0xC593,   // 0x0B70 (2928) pixels
0xCDB4, 0xC594, 0xBD12, 0xA46F, 0xACD1, 0xC573, 0xC593, 0xC593, 0xC594, 0xC573, 0xC593, 0xCDB3, 0xCD94, 0xC594, 0xCD93, 0xC593,   // 0x0B80 (2944) pixels
0xC573, 0xBD53, 0xACD1, 0xA48F, 0xB4F1, 0xBD52, 0xC593, 0xC594, 0xBD73, 0xC573, 0xC594, 0xC573, 0xBD73, 0xC573, 0xBD53, 0xBD53,   // 0x0B90 (2960) pixels
0xBD33, 0xBD53, 0xA490, 0x83AC, 0xA490, 0xB532, 0xBD52, 0xBD53, 0xBD73, 0xBD73, 0xBD53, 0xBD53, 0xBD52, 0xBD52, 0xBD52, 0xB532,   // 0x0BA0 (2976) pixels
0xBD32, 0xB512, 0x93EE, 0x83AD, 0xACD1, 0xB532, 0xB532, 0xB512, 0xBD33, 0xBD32, 0xB532, 0xBD32, 0xBD52, 0xB532, 0xB512, 0xB532,   // 0x0BB0 (2992) pixels
0xB4F2, 0xACB1, 0xA4B1, 0xB4F2, 0xB512, 0xB4F2, 0xB512, 0xBD33, 0xBD52, 0xCDB3, 0xCDB4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5F4, 0xD5D4,   // 0x0BC0 (3008) pixels
0xD5D4, 0xCDD4, 0xCDD4, 0xCDD5, 0xCDD5, 0xBD53, 0xA48F, 0x9C2E, 0x940D, 0x93ED, 0xBD32, 0xCDD4, 0xCDB4, 0xCDB4, 0xD5D4, 0xD5D4,   // 0x0BD0 (3024) pixels
0xD5D4, 0xD5B4, 0xCDB4, 0xCDB3, 0xCDB4, 0xCD93, 0xACB0, 0x8B8C, 0x9C2E, 0xC553, 0xCDB3, 0xCD93, 0xCD94, 0xCD94, 0xCDB4, 0xCD93,   // 0x0BE0 (3040) pixels
0xCD93, 0xCD94, 0xCDB3, 0xC593, 0xC573, 0xBD53, 0xA46F, 0x83AC, 0xAC90, 0xC573, 0xC573, 0xC593, 0xC593, 0xC593, 0xC593, 0xC593,   // 0x0BF0 (3056) pixels
0xC593, 0xCDB4, 0xC573, 0xC573, 0xBD53, 0xB4F1, 0x8BCD, 0x72E9, 0xA44F, 0xBD32, 0xC573, 0xBD52, 0xBD73, 0xBD73, 0xC573, 0xBD52,   // 0x0C00 (3072) pixels
0xC573, 0xC552, 0xC552, 0xBD52, 0xB512, 0x9C6F, 0x7B2B, 0x732A, 0xA490, 0xB532, 0xBD53, 0xB532, 0xBD12, 0xBD32, 0xBD32, 0xC553,   // 0x0C10 (3088) pixels
0xBD52, 0xBD52, 0xBD12, 0xB512, 0xA490, 0x83AC, 0x7B4B, 0x9C4F, 0xB4F2, 0xB4F2, 0xBD32, 0xBD53, 0x8BAC, 0xB4F1, 0xCDB4, 0xD5D4,   // 0x0C20 (3104) pixels
0xD5F4, 0xD5D4, 0xD5F4, 0xD5F4, 0xD5F5, 0xD5F5, 0xD615, 0xD5F5, 0xD5D5, 0xC573, 0xB4F1, 0xACB0, 0x9C4E, 0x9C2E, 0xBD32, 0xCDD4,   // 0x0C30 (3120) pixels
0xD5D5, 0xCDD4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xCDB4, 0xCDB3, 0xBD12, 0x93ED, 0x9C2E, 0xC553, 0xCDB4, 0xCD93,   // 0x0C40 (3136) pixels
0xD5D4, 0xCDB4, 0xCDB3, 0xCDB3, 0xD5D4, 0xD5B4, 0xCD93, 0xCDB4, 0xCD94, 0xC594, 0xACD1, 0x83AC, 0xA48F, 0xC593, 0xC573, 0xC593,   // 0x0C50 (3152) pixels
0xCDB4, 0xCDB4, 0xC593, 0xC593, 0xC593, 0xC593, 0xC593, 0xC553, 0xBD32, 0xA44F, 0x838C, 0x7B4B, 0x9C4E, 0xBD52, 0xBD52, 0xC553,   // 0x0C60 (3168) pixels
0xC593, 0xBD52, 0xC573, 0xC573, 0xBD52, 0xC573, 0xC552, 0xBD52, 0xACB0, 0x8BCD, 0x7B2B, 0x7B4B, 0xA46F, 0xB511, 0xBD52, 0xBD73,   // 0x0C70 (3184) pixels
0xC553, 0xBD32, 0xC552, 0xC553, 0xBD52, 0xBD32, 0xBD32, 0xB4F2, 0x93EE, 0x5206, 0x3963, 0x7B2B, 0xACB1, 0xBD12, 0xBD12, 0xBD32,   // 0x0C80 (3200) pixels
0x6287, 0xA48F, 0xCDB4, 0xD5D4, 0xD5F5, 0xD5F4, 0xD5F4, 0xDDF5, 0xD5F5, 0xD5D4, 0xD5F5, 0xD5F5, 0xD5F5, 0xCD94, 0xB4F1, 0xAC90,   // 0x0C90 (3216) pixels
0xA46F, 0xB4D1, 0xC573, 0xCDB4, 0xD5D5, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xCDD4, 0xCDD4, 0xCDD4, 0xC573, 0xA46F,   // 0x0CA0 (3232) pixels
0x9C2E, 0xC553, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDB4, 0xCDD4, 0xD5D4, 0xCDD4, 0xCDD4, 0xCDD4, 0xCDB4, 0xCD94, 0xCDB4, 0xBD32, 0x93ED,   // 0x0CB0 (3248) pixels
0xA48F, 0xC593, 0xCD93, 0xC593, 0xCDB3, 0xCDB4, 0xCD93, 0xC593, 0xC573, 0xC573, 0xC593, 0xC573, 0xACB1, 0x8BAC, 0x730A, 0x6AA9,   // 0x0CC0 (3264) pixels
0x8BAC, 0xB511, 0xBD52, 0xBD32, 0xC573, 0xC573, 0xC573, 0xC572, 0xC573, 0xC573, 0xC553, 0xBD52, 0x9C4F, 0x730A, 0x6AA9, 0x6288,   // 0x0CD0 (3280) pixels
0x93ED, 0xB511, 0xBD32, 0xBD52, 0xC553, 0xC573, 0xBD52, 0xBD52, 0xBD52, 0xBD52, 0xBD33, 0xBD12, 0x940E, 0x5A27, 0x49C5, 0x7B6B,   // 0x0CE0 (3296) pixels
0xACD1, 0xB511, 0xBD32, 0xBD32, 0x8B8C, 0xB4F1, 0xCDD4, 0xD5F5, 0xD5F5, 0xD5D4, 0xD5F4, 0xD5F5, 0xD5F4, 0xD5F5, 0xDDF5, 0xD5F5,   // 0x0CF0 (3312) pixels
0xD5F5, 0xC573, 0xA44F, 0x93CD, 0xA48F, 0xB511, 0xCDB4, 0xD5D5, 0xD5F4, 0xD5D4, 0xD5F4, 0xD5D4, 0xD5D4, 0xD5F4, 0xD5F4, 0xD5F4,   // 0x0D00 (3328) pixels
0xD5D4, 0xCDD4, 0xC593, 0xAC8F, 0xA46F, 0xC553, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDD4, 0xCDD4, 0xCDD4, 0xCDD4, 0xCDD4, 0xCDB4, 0xCDB4,   // 0x0D10 (3344) pixels
0xCDB4, 0xCDB4, 0xBD32, 0x9C0E, 0xAC8F, 0xC573, 0xC593, 0xCD93, 0xCD93, 0xCDB3, 0xCD93, 0xCD93, 0xC593, 0xCD94, 0xCD94, 0xC593,   // 0x0D20 (3360) pixels
0xB4F2, 0x9C0E, 0x7B4B, 0x6AA8, 0x8B8C, 0xB4F1, 0xC553, 0xC552, 0xC572, 0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xBD32,   // 0x0D30 (3376) pixels
0xA490, 0x8BCD, 0x732A, 0x6AC9, 0x942E, 0xB512, 0xBD32, 0xBD32, 0xBD52, 0xC573, 0xC553, 0xC553, 0xBD53, 0xBD32, 0xBD33, 0xBD32,   // 0x0D40 (3392) pixels
0xACD1, 0x93EE, 0x8BAD, 0xA46F, 0xB512, 0xBD32, 0xBD32, 0xBD52, 0xB511, 0xC573, 0xD5D4, 0xD5F5, 0xD5F5, 0xD5F5, 0xD5F5, 0xD5F4,   // 0x0D50 (3408) pixels
0xD5F4, 0xDE15, 0xDDF5, 0xD5F5, 0xD5F5, 0xC593, 0xAC8F, 0x9C2E, 0xACB0, 0xBD32, 0xCDB4, 0xCDD4, 0xCDD4, 0xD5D4, 0xD5F5, 0xD5F4,   // 0x0D60 (3424) pixels
0xD5D4, 0xD5F4, 0xD5F4, 0xD5F4, 0xD5F5, 0xD5D4, 0xCDB4, 0xB4F1, 0xB4D0, 0xC573, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDD4, 0xD5D4, 0xD5B4,   // 0x0D70 (3440) pixels
0xD5D4, 0xD5D4, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDB4, 0xC573, 0xACB0, 0xB4F1, 0xC573, 0xC593, 0xCDB4, 0xCDB3, 0xCDB3, 0xCDB3, 0xCDB3,   // 0x0D80 (3456) pixels
0xCD93, 0xCD93, 0xC593, 0xC573, 0xC573, 0xBD32, 0xACB1, 0x9C4F, 0xA46F, 0xBD32, 0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xC572,   // 0x0D90 (3472) pixels
0xC573, 0xC552, 0xC573, 0xBD52, 0xBD32, 0xB512, 0xA490, 0x942E, 0xACB0, 0xBD33, 0xBD52, 0xBD53, 0xBD52, 0xC553, 0xC553, 0xC553,   // 0x0DA0 (3488) pixels
0xBD53, 0xBD52, 0xBD53, 0xBD33, 0xB512, 0xB512, 0xB4F1, 0xB4F2, 0xBD12, 0xBD32, 0xBD32, 0xBD32, 0xD5F4, 0xD5D4, 0xD5F5, 0xD615,   // 0x0DB0 (3504) pixels
0xD5F5, 0xD5F5, 0xDDF5, 0xD5F5, 0xDDF5, 0xDE15, 0xDE15, 0xD5F5, 0xD5F5, 0xD5D4, 0xC573, 0xC553, 0xC553, 0xC593, 0xCDB4, 0xD5D4,   // 0x0DC0 (3520) pixels
0xD5D4, 0xD5F5, 0xD5F5, 0xD5F4, 0xD5F4, 0xD5D4, 0xD5F4, 0xD5D4, 0xD5F4, 0xD5D4, 0xD5D4, 0xC573, 0xC553, 0xCD94, 0xCDB4, 0xCDB4,   // 0x0DD0 (3536) pixels
0xCDD4, 0xCDD4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xCDB4, 0xCDB4, 0xCDD4, 0xCDB4, 0xCDB4, 0xC573, 0xC572, 0xC593, 0xC593, 0xCDB4,   // 0x0DE0 (3552) pixels
0xCDB4, 0xCDB4, 0xCDB3, 0xCD93, 0xCDB3, 0xCD93, 0xC593, 0xC573, 0xC573, 0xC573, 0xBD53, 0xBD32, 0xBD52, 0xC553, 0xC553, 0xC553,   // 0x0DF0 (3568) pixels
0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xC552, 0xC553, 0xBD52, 0xBD53, 0xBD53, 0xB532, 0xB512, 0xB532, 0xBD53, 0xBD53, 0xBD52,   // 0x0E00 (3584) pixels
0xBD52, 0xBD52, 0xBD52, 0xBD52, 0xBD53, 0xBD52, 0xC553, 0xBD53, 0xB532, 0xB532, 0xBD32, 0xBD32, 0xBD32, 0xBD32, 0xBD32, 0xBD32,   // 0x0E10 (3600) pixels
0xDE15, 0xD615, 0xD5F5, 0xDDF5, 0xDE15, 0xDDF5, 0xD5F5, 0xDDF5, 0xDE15, 0xDE15, 0xDE15, 0xD5F5, 0xD5F5, 0xD5F5, 0xD5F4, 0xD5F5,   // 0x0E20 (3616) pixels
0xD5F5, 0xD5D5, 0xD5F4, 0xD5F5, 0xD5F5, 0xD5F5, 0xD5F4, 0xD5F4, 0xD5F4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5F5, 0xCDB4,   // 0x0E30 (3632) pixels
0xCDB4, 0xCDB4, 0xCDB4, 0xCDD4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xD5D4, 0xCDD4, 0xCDB4, 0xCDB4, 0xCDB4, 0xCDB4, 0xCDB4,   // 0x0E40 (3648) pixels
0xCDB3, 0xCD93, 0xCDB3, 0xCDB4, 0xCDD4, 0xCDB4, 0xCDB4, 0xCD93, 0xCDB3, 0xCD93, 0xCD93, 0xCD93, 0xC573, 0xC573, 0xC573, 0xC593,   // 0x0E50 (3664) pixels
0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xC573, 0xC552, 0xC573, 0xC572, 0xC572, 0xC573, 0xC573, 0xC553, 0xBD53, 0xBD53, 0xBD53,   // 0x0E60 (3680) pixels
0xBD32, 0xBD52, 0xBD52, 0xBD52, 0xBD52, 0xBD52, 0xC552, 0xBD32, 0xC553, 0xBD32, 0xBD33, 0xBD53, 0xBD33, 0xBD32, 0xBD32, 0xBD33,   // 0x0E70 (3696) pixels 
};
