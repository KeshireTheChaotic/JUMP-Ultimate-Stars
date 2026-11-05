
void FUN_02166014(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021bac28(*(undefined4 *)(iVar2 + 0xc),0x71,0,0,0,0,0,0);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0xc)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_02165d7c(param_1);
  return;
}

