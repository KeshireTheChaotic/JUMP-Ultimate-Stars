
undefined4 FUN_021cf748(int param_1,uint param_2,int param_3,uint param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (param_4 < 0x10) {
    return 0xffffffff;
  }
  if (((int)param_2 < 0) || (5 < (int)param_2)) {
    return 0xfffffffd;
  }
  *(undefined1 *)(param_3 + 4) = 0;
  FUN_021cf2d4(param_1,param_3,param_2 & 0xff);
  if (param_2 == 0) {
    if (((DAT_021d7bf0 == 1) && (*(int *)(param_1 + 0xc) == 4)) &&
       (iVar1 = FUN_021cf208(param_1), iVar1 == 0)) {
      return 0xfffffffd;
    }
    if (*(byte *)(param_1 + 4) == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = 1 << (uint)*(byte *)(param_1 + 4);
    }
    *(int *)(param_1 + 8) = iVar1;
  }
  iVar1 = FUN_021cf188(param_1,param_3);
  if (iVar1 == 0) {
    return 0xfffffffd;
  }
  return 0;
}

