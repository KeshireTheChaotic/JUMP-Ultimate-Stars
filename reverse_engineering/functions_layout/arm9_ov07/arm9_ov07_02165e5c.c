
void FUN_02165e5c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021bac28(*(undefined4 *)(iVar2 + 0xc),0x6e,0,0,0,0,0,0);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0xc)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  iVar1 = func_0x021bacfc(*(undefined4 *)(iVar2 + 0xc));
  if (iVar1 == 0) {
    FUN_02165d48(param_1,1);
  }
  else {
    FUN_02070cdc(*(undefined4 *)(iVar2 + 0x20));
    iVar1 = FUN_02072134();
    if (iVar1 < 0) {
      iVar1 = FUN_02072090();
      if (iVar1 < 0) {
        FUN_02165d48(param_1,4);
      }
      else {
        FUN_02165c90(iVar2);
        FUN_02165d48(param_1,3);
      }
    }
    else {
      FUN_02165c90(iVar2);
      FUN_02165d48(param_1,2);
    }
  }
  return;
}

