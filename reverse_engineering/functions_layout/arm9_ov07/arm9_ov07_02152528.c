
void FUN_02152528(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  func_0x021b65cc();
  iVar1 = *(int *)(iVar3 + 0x48);
  if (iVar1 != 0) {
    piVar2 = *(int **)(iVar1 + 4);
    (**(code **)(*piVar2 + 0x198))(piVar2,0);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0x48) + 4),1);
  }
  return;
}

