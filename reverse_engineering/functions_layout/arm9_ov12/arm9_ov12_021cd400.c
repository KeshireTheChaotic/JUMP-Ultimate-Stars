
void FUN_021cd400(byte *param_1,short *param_2,undefined4 param_3,short *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *local_60;
  uint local_5c;
  short *local_18;
  
  local_5c = 0;
  uVar3 = FUN_0200d338(param_3,3);
  local_60 = param_1;
  local_18 = param_2;
  if (uVar3 != 0) {
    do {
      bVar1 = local_60[1];
      uVar4 = (uint)bVar1;
      bVar2 = local_60[2];
      uVar5 = (uint)bVar2;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      uVar6 = (uint)*local_60;
      uVar7 = (int)uVar6 >> 5;
      if ((uVar7 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((uVar7 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((uVar7 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      *local_18 = (short)iVar8;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      uVar7 = (int)uVar6 >> 2;
      if ((uVar7 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((uVar7 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((uVar7 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar7 & 7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      local_18[1] = (short)iVar8;
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar9 = iVar8 >> 2;
      uVar6 = (uVar6 & 3) << 1;
      if ((uVar6 & 2) != 0) {
        iVar9 = iVar9 + iVar8;
      }
      if ((int)uVar4 >> 7 != 0) {
        iVar9 = iVar9 + (iVar8 >> 1);
      }
      if ((uVar6 & 4) == 0) {
        iVar9 = *param_4 + iVar9;
        if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
      }
      else {
        iVar9 = *param_4 - iVar9;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar6 | (int)uVar4 >> 7];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar9;
      *(char *)(param_4 + 1) = (char)iVar8;
      local_18[2] = (short)iVar9;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      uVar6 = (int)uVar4 >> 4;
      if ((uVar6 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((uVar6 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((uVar6 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar6 & 7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      local_18[3] = (short)iVar8;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      uVar6 = (int)uVar4 >> 1;
      if ((uVar6 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((uVar6 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((uVar6 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar6 & 7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      local_18[4] = (short)iVar8;
      iVar8 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar9 = iVar8 >> 2;
      uVar6 = (int)uVar5 >> 6;
      if ((uVar6 & 2) != 0) {
        iVar9 = iVar9 + iVar8;
      }
      if ((uVar6 & 1) != 0) {
        iVar9 = iVar9 + (iVar8 >> 1);
      }
      if ((bVar1 & 1) == 0) {
        iVar9 = *param_4 + iVar9;
        if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
      }
      else {
        iVar9 = *param_4 - iVar9;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
      }
      iVar8 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[(uVar4 & 1) << 2 | uVar6];
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      else if (0x58 < iVar8) {
        iVar8 = 0x58;
      }
      *param_4 = (short)iVar9;
      *(char *)(param_4 + 1) = (char)iVar8;
      local_18[5] = (short)iVar9;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      uVar4 = (int)uVar5 >> 3;
      if ((uVar4 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((uVar4 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((uVar4 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar4 & 7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      local_18[6] = (short)iVar8;
      iVar9 = (int)*(short *)(&DAT_021d02d4 + (uint)*(byte *)(param_4 + 1) * 2);
      iVar8 = iVar9 >> 2;
      if ((bVar2 & 2) != 0) {
        iVar8 = iVar8 + iVar9;
      }
      if ((bVar2 & 1) != 0) {
        iVar8 = iVar8 + (iVar9 >> 1);
      }
      if ((bVar2 & 4) == 0) {
        iVar8 = *param_4 + iVar8;
        if (0x7fff < iVar8) {
          iVar8 = 0x7fff;
        }
      }
      else {
        iVar8 = *param_4 - iVar8;
        if (iVar8 < -0x8000) {
          iVar8 = -0x8000;
        }
      }
      iVar9 = (uint)*(byte *)(param_4 + 1) + (int)(char)(&DAT_021d02bc)[uVar5 & 7];
      if (iVar9 < 0) {
        iVar9 = 0;
      }
      else if (0x58 < iVar9) {
        iVar9 = 0x58;
      }
      *param_4 = (short)iVar8;
      *(char *)(param_4 + 1) = (char)iVar9;
      local_18[7] = (short)iVar8;
      local_60 = local_60 + 3;
      local_18 = local_18 + 8;
      local_5c = local_5c + 1;
    } while (local_5c < uVar3);
  }
  return;
}

