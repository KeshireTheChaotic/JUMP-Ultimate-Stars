
undefined4 FUN_021a1e14(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined1 auStack_110 [260];
  
  *(undefined1 *)(param_1 + 0x34) = param_2;
  if ((DAT_021a75a4 == 0) || (iVar1 = FUN_02176f90(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0217563c(param_1,0x50,auStack_110,0xff);
  if (iVar1 == -1) {
    return 0;
  }
  auStack_110[iVar1] = 0;
  iVar1 = FUN_02177ea4(0xffffffff);
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}

