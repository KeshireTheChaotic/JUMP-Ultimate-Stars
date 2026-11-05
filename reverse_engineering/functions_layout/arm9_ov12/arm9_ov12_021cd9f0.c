
void FUN_021cd9f0(byte *param_1,short *param_2,uint param_3,short *param_4)

{
  byte bVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  uint uVar5;
  short *local_48;
  uint local_40;
  byte *local_14;
  
  local_40 = 0;
  local_48 = param_2;
  local_14 = param_1;
  if (param_3 != 0) {
    do {
      bVar1 = *local_14;
      iVar4 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar2 = iVar4 >> 3;
      if ((bVar1 & 4) != 0) {
        iVar2 = iVar2 + iVar4;
      }
      if ((bVar1 & 2) != 0) {
        iVar2 = iVar2 + (iVar4 >> 1);
      }
      if ((bVar1 & 1) != 0) {
        iVar2 = iVar2 + (iVar4 >> 2);
      }
      if ((bVar1 & 8) == 0) {
        iVar2 = *param_4 + iVar2;
        if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
      }
      else {
        iVar2 = *param_4 - iVar2;
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
      }
      iVar4 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02c4)[bVar1 & 0xf];
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x58 < iVar4) {
        iVar4 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar4;
      *local_48 = (short)iVar2;
      uVar5 = (int)(uint)*local_14 >> 4;
      iVar4 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar2 = iVar4 >> 3;
      if ((uVar5 & 4) != 0) {
        iVar2 = iVar2 + iVar4;
      }
      if ((uVar5 & 2) != 0) {
        iVar2 = iVar2 + (iVar4 >> 1);
      }
      if ((uVar5 & 1) != 0) {
        iVar2 = iVar2 + (iVar4 >> 2);
      }
      if ((uVar5 & 8) == 0) {
        iVar2 = *param_4 + iVar2;
        if (0x7fff < iVar2) {
          iVar2 = 0x7fff;
        }
      }
      else {
        iVar2 = *param_4 - iVar2;
        if (iVar2 < -0x8000) {
          iVar2 = -0x8000;
        }
      }
      iVar4 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02c4)[uVar5];
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else if (0x58 < iVar4) {
        iVar4 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar4;
      psVar3 = local_48 + 1;
      local_48 = local_48 + 2;
      *psVar3 = (short)iVar2;
      local_14 = local_14 + 1;
      local_40 = local_40 + 1;
    } while (local_40 < param_3);
  }
  return;
}

