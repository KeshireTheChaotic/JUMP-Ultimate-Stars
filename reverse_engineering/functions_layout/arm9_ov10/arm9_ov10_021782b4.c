
undefined4 FUN_021782b4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_110 [260];
  
  if ((DAT_021a75a4 == 0) || (iVar1 = FUN_02176f90(), iVar1 == 0)) {
    return 0;
  }
  iVar1 = FUN_0217563c(param_1,param_2,auStack_110,0xff);
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

