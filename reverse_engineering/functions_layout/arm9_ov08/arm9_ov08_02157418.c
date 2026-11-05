
undefined4 FUN_02157418(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  DAT_0216e6f4 = param_1;
  iVar1 = FUN_021573c4(param_2,param_3);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  DAT_0216e6f0 = '\0';
  FUN_0215731c();
  FUN_021570e4();
  FUN_021623b0();
  FUN_02157088(FUN_02157a38 + 1);
  do {
    FUN_02167028();
    (*DAT_0216e6fc)();
    FUN_02167824(0);
    FUN_02166c24();
    FUN_0216755c();
    FUN_020552a8();
  } while (DAT_0216e6f0 == '\0');
  FUN_02157094();
  return 0;
}

