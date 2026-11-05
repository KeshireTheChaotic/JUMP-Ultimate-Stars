
void FUN_02158d60(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,0);
  func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x50) + 4));
  FUN_02073f64(9,0,0x36);
  while (iVar1 = FUN_02073854(), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  FUN_021595a8(*(undefined4 *)(iVar2 + 0x94));
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  return;
}

