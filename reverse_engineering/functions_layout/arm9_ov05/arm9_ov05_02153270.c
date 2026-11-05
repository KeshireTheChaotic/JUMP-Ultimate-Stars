
void FUN_02153270(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02073840();
  if (iVar1 != 0) {
    func_0x021b65cc();
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 100) + 4));
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x90) + 4));
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_021533ac);
  }
  FUN_021532c4(param_1);
  return;
}

