
void FUN_0215d9ac(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  piVar1 = *(int **)(*(int *)(iVar4 + 0x48) + 4);
  iVar2 = (**(code **)(*piVar1 + 0xb0))(piVar1,0x31305053);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0214f340();
  }
  iVar3 = (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x68))();
  if (iVar3 != 0) {
    FUN_02023894(*(undefined4 *)(iVar2 + 4),0x810004,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    func_0x021b65cc();
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 4));
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x215da21);
  }
  return;
}

