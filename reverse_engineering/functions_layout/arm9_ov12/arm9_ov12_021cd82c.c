
void FUN_021cd82c(byte *param_1,short *param_2,uint param_3,short *param_4)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *local_60;
  short *local_5c;
  uint local_58;
  
  local_58 = 0;
  local_60 = param_1;
  local_5c = param_2;
  if (param_3 >> 1 != 0) {
    do {
      iVar1 = (int)*local_5c - (int)*param_4;
      if (iVar1 < 0) {
        uVar3 = 8;
        iVar1 = -iVar1;
      }
      else {
        uVar3 = 0;
      }
      iVar5 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar5 <= iVar1) {
        uVar3 = uVar3 | 4;
        iVar1 = iVar1 - iVar5;
      }
      iVar6 = iVar5 >> 1;
      if (iVar6 <= iVar1) {
        uVar3 = uVar3 | 2;
        iVar1 = iVar1 - iVar6;
      }
      if (iVar5 >> 2 <= iVar1) {
        uVar3 = uVar3 | 1;
      }
      iVar1 = iVar5 >> 3;
      if ((uVar3 & 4) != 0) {
        iVar1 = iVar1 + iVar5;
      }
      if ((uVar3 & 2) != 0) {
        iVar1 = iVar1 + iVar6;
      }
      if ((uVar3 & 1) != 0) {
        iVar1 = iVar1 + (iVar5 >> 2);
      }
      if ((uVar3 & 8) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02c4)[uVar3];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar5;
      psVar2 = local_5c + 1;
      local_5c = local_5c + 2;
      iVar1 = (int)*psVar2 - (int)*param_4;
      if (iVar1 < 0) {
        uVar4 = 8;
        iVar1 = -iVar1;
      }
      else {
        uVar4 = 0;
      }
      iVar5 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if (iVar5 <= iVar1) {
        uVar4 = uVar4 | 4;
        iVar1 = iVar1 - iVar5;
      }
      iVar6 = iVar5 >> 1;
      if (iVar6 <= iVar1) {
        uVar4 = uVar4 | 2;
        iVar1 = iVar1 - iVar6;
      }
      if (iVar5 >> 2 <= iVar1) {
        uVar4 = uVar4 | 1;
      }
      iVar1 = iVar5 >> 3;
      if ((uVar4 & 4) != 0) {
        iVar1 = iVar1 + iVar5;
      }
      if ((uVar4 & 2) != 0) {
        iVar1 = iVar1 + iVar6;
      }
      if ((uVar4 & 1) != 0) {
        iVar1 = iVar1 + (iVar5 >> 2);
      }
      if ((uVar4 & 8) != 0) {
        iVar1 = -iVar1;
      }
      iVar1 = *param_4 + iVar1;
      if (iVar1 < -0x8000) {
        iVar1 = -0x8000;
      }
      if (0x7fff < iVar1) {
        iVar1 = 0x7fff;
      }
      iVar5 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02c4)[uVar4];
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      else if (0x58 < iVar5) {
        iVar5 = 0x58;
      }
      *param_4 = (short)iVar1;
      *(char *)(param_4 + 1) = (char)iVar5;
      *local_60 = (byte)uVar3 | (byte)(uVar4 << 4);
      local_60 = local_60 + 1;
      local_58 = local_58 + 1;
    } while (local_58 < param_3 >> 1);
  }
  return;
}

