
longlong FUN_02005bac(int param_1,int param_2,code *param_3,undefined4 param_4,int *param_5,
                     undefined4 *param_6,undefined4 *param_7)

{
  ushort uVar1;
  int iVar2;
  uint unaff_r5;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint local_38;
  uint local_30;
  uint local_2c;
  uint local_24;
  int local_1c;
  
  iVar2 = 0;
  uVar4 = 1;
  lVar6 = 0;
  lVar5 = 0;
  *param_7 = 0;
  local_1c = 0;
  *param_6 = 0;
  if ((((param_1 < 0) || (param_1 == 1)) || (0x24 < param_1)) || (param_2 < 1)) {
    uVar4 = 0x40;
  }
  else {
    iVar2 = 1;
    unaff_r5 = (*param_3)(param_4,0,0);
  }
  if (param_1 != 0) {
    lVar5 = FUN_0200d0c4(0xffffffff,0xffffffff,param_1,param_1 >> 0x1f);
    lVar6 = 0;
  }
switchD_02005c2e_caseD_0:
  local_38 = (uint)((ulonglong)lVar6 >> 0x20);
  local_24 = (uint)lVar6;
  if (((param_2 < iVar2) || (unaff_r5 == 0xffffffff)) || ((uVar4 & 0x60) != 0)) {
    if ((uVar4 & 0x34) == 0) {
      lVar6 = 0;
      local_1c = 0;
    }
    else {
      local_1c = iVar2 + -1 + local_1c;
    }
    *param_5 = local_1c;
    (*param_3)(param_4,unaff_r5,1);
    return lVar6;
  }
  switch(uVar4) {
  case 0:
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_02005c2e_caseD_0;
  case 1:
    if (((int)unaff_r5 < 0) || (0x7f < (int)unaff_r5)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_0208d520 + unaff_r5 * 2) & 0x100;
    }
    if (uVar1 == 0) {
      if (unaff_r5 == 0x2b) {
        iVar2 = iVar2 + 1;
        unaff_r5 = (*param_3)(param_4,0,0);
      }
      else if (unaff_r5 == 0x2d) {
        iVar2 = iVar2 + 1;
        unaff_r5 = (*param_3)(param_4,0,0);
        *param_6 = 1;
      }
      uVar4 = 2;
    }
    else {
      unaff_r5 = (*param_3)(param_4,0,0);
      local_1c = local_1c + 1;
    }
    goto switchD_02005c2e_caseD_0;
  case 2:
    if (((param_1 == 0) || (param_1 == 0x10)) && (unaff_r5 == 0x30)) {
      uVar4 = 4;
      iVar2 = iVar2 + 1;
      unaff_r5 = (*param_3)(param_4,0,0);
    }
    else {
      uVar4 = 8;
    }
    goto switchD_02005c2e_caseD_0;
  case 4:
    if ((unaff_r5 == 0x58) || (unaff_r5 == 0x78)) {
      param_1 = 0x10;
      uVar4 = 8;
      iVar2 = iVar2 + 1;
      unaff_r5 = (*param_3)(param_4,0,0);
    }
    else {
      if (param_1 == 0) {
        param_1 = 8;
      }
      uVar4 = 0x10;
    }
    goto switchD_02005c2e_caseD_0;
  default:
    if (uVar4 != 0x10) goto switchD_02005c2e_caseD_0;
  case 8:
    if (param_1 == 0) {
      param_1 = 10;
    }
    if (lVar5 == 0) {
      lVar5 = FUN_0200d0c4(0xffffffff,0xffffffff,param_1,param_1 >> 0x1f);
    }
    local_30 = (uint)((ulonglong)lVar5 >> 0x20);
    local_2c = (uint)lVar5;
    if (((int)unaff_r5 < 0) || (0x7f < (int)unaff_r5)) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_0208d520 + unaff_r5 * 2) & 8;
    }
    if (uVar1 == 0) {
      if (((int)unaff_r5 < 0) || (0x7f < (int)unaff_r5)) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(ushort *)(&DAT_0208d520 + unaff_r5 * 2) & 1;
      }
      if (uVar1 != 0) {
        if (((int)unaff_r5 < 0) || (0x7f < (int)unaff_r5)) {
          uVar3 = unaff_r5;
        }
        else {
          uVar3 = (uint)(byte)(&DAT_0208d4a0)[unaff_r5];
        }
        if ((int)(uVar3 - 0x37) < param_1) {
          if ((-1 < (int)unaff_r5) && ((int)unaff_r5 < 0x80)) {
            unaff_r5 = (uint)(byte)(&DAT_0208d4a0)[unaff_r5];
          }
          uVar3 = unaff_r5 - 0x37;
          goto LAB_02005d90;
        }
      }
      if (uVar4 == 0x10) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0x40;
      }
    }
    else {
      uVar3 = unaff_r5 - 0x30;
      if ((int)uVar3 < param_1) {
LAB_02005d90:
        if (local_30 <= local_38 && (uint)(local_24 <= local_2c) <= local_30 - local_38) {
          *param_7 = 1;
        }
        lVar6 = FUN_0200d10c(local_24,local_38,param_1,param_1 >> 0x1f);
        uVar4 = -(int)((ulonglong)lVar6 >> 0x20) - 1;
        if (uVar4 <= (uint)((int)uVar3 >> 0x1f) &&
            (uint)(uVar3 <= -(int)lVar6 - 1U) <= uVar4 - ((int)uVar3 >> 0x1f)) {
          *param_7 = 1;
        }
        lVar6 = lVar6 + (int)uVar3;
        uVar4 = 0x10;
        iVar2 = iVar2 + 1;
        unaff_r5 = (*param_3)(param_4,0,0);
      }
      else if (uVar4 == 0x10) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0x40;
      }
    }
    goto switchD_02005c2e_caseD_0;
  }
}

