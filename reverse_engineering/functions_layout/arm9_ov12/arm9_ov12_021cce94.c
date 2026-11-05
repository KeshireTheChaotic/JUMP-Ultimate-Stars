
void FUN_021cce94(byte *param_1,short *param_2,uint param_3,short *param_4)

{
  int iVar1;
  short *psVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *local_e8;
  uint local_e4;
  short *local_38;
  
  local_e4 = 0;
  local_e8 = param_1;
  local_38 = param_2;
  if (param_3 >> 3 != 0) {
    do {
      iVar1 = (int)*local_38 - (int)*param_4;
      if (iVar1 < 0) {
        uVar4 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar4 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar4 = uVar4 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar4 = uVar4 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar4 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar4 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar4 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar4];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      iVar1 = (int)local_38[1] - (int)*param_4;
      if (iVar1 < 0) {
        uVar5 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar5 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar5 = uVar5 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar5 = uVar5 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar5 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar5 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar5 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar5];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      iVar1 = (int)local_38[2] - (int)*param_4;
      if (iVar1 < 0) {
        uVar6 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar6 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar6 = uVar6 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar6 = uVar6 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar6 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar6 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar6 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar6];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      *local_e8 = (byte)(uVar4 << 5) | (byte)(uVar5 << 2) | (byte)((int)uVar6 >> 1);
      iVar1 = (int)local_38[3] - (int)*param_4;
      if (iVar1 < 0) {
        uVar4 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar4 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar4 = uVar4 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar4 = uVar4 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar4 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar4 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar4 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar4];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      iVar1 = (int)local_38[4] - (int)*param_4;
      if (iVar1 < 0) {
        uVar5 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar5 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar5 = uVar5 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar5 = uVar5 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar5 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar5 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar5 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar5];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      iVar1 = (int)local_38[5] - (int)*param_4;
      if (iVar1 < 0) {
        uVar7 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar7 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar7 = uVar7 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar7 = uVar7 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar7 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar7 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar7 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar7];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      local_e8[1] = (byte)((int)uVar7 >> 2) |
                    (byte)(uVar6 << 7) | (byte)(uVar4 << 4) | (byte)(uVar5 << 1);
      iVar1 = (int)local_38[6] - (int)*param_4;
      if (iVar1 < 0) {
        uVar4 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar4 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar4 = uVar4 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar4 = uVar4 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar4 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar4 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar4 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar4];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      psVar2 = local_38 + 7;
      local_38 = local_38 + 8;
      iVar1 = (int)*psVar2 - (int)*param_4;
      if (iVar1 < 0) {
        uVar5 = 4;
        iVar1 = -iVar1;
      }
      else {
        uVar5 = 0;
      }
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar8 <= iVar1) {
        uVar5 = uVar5 | 2;
        iVar1 = iVar1 - iVar8;
      }
      if (iVar8 >> 1 <= iVar1) {
        uVar5 = uVar5 | 1;
      }
      iVar1 = iVar8 >> 2;
      if ((uVar5 & 2) != 0) {
        iVar1 = iVar1 + iVar8;
      }
      if ((uVar5 & 1) != 0) {
        iVar1 = iVar1 + (iVar8 >> 1);
      }
      if ((uVar5 & 4) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar5];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar8;
      pbVar3 = local_e8 + 2;
      local_e8 = local_e8 + 3;
      *pbVar3 = (byte)(uVar7 << 6) | (byte)(uVar4 << 3) | (byte)uVar5;
      local_e4 = local_e4 + 1;
    } while (local_e4 < param_3 >> 3);
  }
  return;
}

