
void FUN_02166080(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021bac28(*(undefined4 *)(iVar2 + 0xc),0x72,0,0,0,0,0,0);
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0xc)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  iVar1 = func_0x021bacfc(*(undefined4 *)(iVar2 + 0xc));
  if (iVar1 == 0) {
    FUN_02165d48(param_1,0);
  }
  else {
    *(undefined4 *)(iVar2 + 0x24) = 1;
    FUN_02165a60(iVar2);
  }
  return;
}

