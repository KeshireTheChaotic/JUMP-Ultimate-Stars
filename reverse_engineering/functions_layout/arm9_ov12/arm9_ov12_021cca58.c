
void FUN_021cca58(byte *param_1,short *param_2,uint param_3,short *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  byte *local_70;
  uint local_6c;
  
  local_6c = 0;
  local_70 = param_1;
  if (param_3 >> 2 != 0) {
    do {
      iVar5 = (int)*param_2 - (int)*param_4;
      if (iVar5 < 0) {
        uVar1 = 2;
        iVar5 = -iVar5;
      }
      else {
        uVar1 = 0;
      }
      iVar7 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar7 <= iVar5) {
        uVar1 = uVar1 | 1;
      }
      if ((uVar1 & 1) == 0) {
        iVar7 = 0;
      }
      if ((uVar1 & 2) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = *param_4 + iVar7;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar1];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar7;
      *(char *)(param_4 + 1) = (char)iVar5;
      iVar5 = (int)param_2[1] - (int)*param_4;
      if (iVar5 < 0) {
        uVar2 = 2;
        iVar5 = -iVar5;
      }
      else {
        uVar2 = 0;
      }
      iVar7 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar7 <= iVar5) {
        uVar2 = uVar2 | 1;
      }
      if ((uVar2 & 1) == 0) {
        iVar7 = 0;
      }
      if ((uVar2 & 2) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = *param_4 + iVar7;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar2];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar7;
      *(char *)(param_4 + 1) = (char)iVar5;
      iVar5 = (int)param_2[2] - (int)*param_4;
      if (iVar5 < 0) {
        uVar3 = 2;
        iVar5 = -iVar5;
      }
      else {
        uVar3 = 0;
      }
      iVar7 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar7 <= iVar5) {
        uVar3 = uVar3 | 1;
      }
      if ((uVar3 & 1) == 0) {
        iVar7 = 0;
      }
      if ((uVar3 & 2) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = *param_4 + iVar7;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar3];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar7;
      *(char *)(param_4 + 1) = (char)iVar5;
      psVar6 = param_2 + 3;
      param_2 = param_2 + 4;
      iVar5 = (int)*psVar6 - (int)*param_4;
      if (iVar5 < 0) {
        uVar4 = 2;
        iVar5 = -iVar5;
      }
      else {
        uVar4 = 0;
      }
      iVar7 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar7 <= iVar5) {
        uVar4 = uVar4 | 1;
      }
      if ((uVar4 & 1) == 0) {
        iVar7 = 0;
      }
      if ((uVar4 & 2) != 0) {
        iVar7 = -iVar7;
      }
      iVar7 = *param_4 + iVar7;
      if (iVar7 < -0x8000) {
        iVar7 = -0x8000;
      }
      if (0x7fff < iVar7) {
        iVar7 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar4];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar7;
      *(char *)(param_4 + 1) = (char)iVar5;
      *local_70 = (byte)uVar1 | (byte)(uVar2 << 2) | (byte)(uVar3 << 4) | (byte)(uVar4 << 6);
      local_70 = local_70 + 1;
      local_6c = local_6c + 1;
    } while (local_6c < param_3 >> 2);
  }
  return;
}

