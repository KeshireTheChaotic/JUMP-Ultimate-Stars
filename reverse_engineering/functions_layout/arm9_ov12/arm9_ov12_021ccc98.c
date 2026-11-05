
void FUN_021ccc98(byte *param_1,short *param_2,uint param_3,short *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint uVar5;
  uint local_6c;
  short *local_18;
  
  local_6c = 0;
  local_18 = param_2;
  if (param_3 != 0) {
    do {
      bVar1 = *param_1;
      iVar2 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if ((bVar1 & 1) == 0) {
        iVar2 = 0;
      }
      if ((bVar1 & 2) == 0) {
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
      iVar3 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[bVar1 & 3];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x58 < iVar3) {
        iVar3 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar3;
      *local_18 = (short)iVar2;
      uVar5 = (int)(uint)*param_1 >> 2;
      iVar2 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
      }
      if ((uVar5 & 2) == 0) {
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
      iVar3 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar5 & 3];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x58 < iVar3) {
        iVar3 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar3;
      local_18[1] = (short)iVar2;
      uVar5 = (int)(uint)*param_1 >> 4;
      iVar2 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
      }
      if ((uVar5 & 2) == 0) {
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
      iVar3 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar5 & 3];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x58 < iVar3) {
        iVar3 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar3;
      local_18[2] = (short)iVar2;
      uVar5 = (int)(uint)*param_1 >> 6;
      iVar2 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
      }
      if ((uVar5 & 2) == 0) {
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
      iVar3 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02b8)[uVar5];
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else if (0x58 < iVar3) {
        iVar3 = 0x58;
      }
      *param_4 = (short)iVar2;
      *(char *)(param_4 + 1) = (char)iVar3;
      psVar4 = local_18 + 3;
      local_18 = local_18 + 4;
      *psVar4 = (short)iVar2;
      param_1 = param_1 + 1;
      local_6c = local_6c + 1;
    } while (local_6c < param_3);
  }
  return;
}

