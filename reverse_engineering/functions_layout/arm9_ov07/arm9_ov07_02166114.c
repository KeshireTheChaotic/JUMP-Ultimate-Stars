
void FUN_02166114(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_02072090();
  FUN_02165c90(iVar3,uVar1);
  func_0x021bac28(*(undefined4 *)(iVar3 + 0xc),0x73,0,0,0,0,0,0);
  while (iVar2 = func_0x021bad2c(*(undefined4 *)(iVar3 + 0xc)), iVar2 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_02165d7c(param_1);
  return;
}

