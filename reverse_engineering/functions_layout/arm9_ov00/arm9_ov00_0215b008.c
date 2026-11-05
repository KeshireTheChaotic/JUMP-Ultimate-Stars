
void FUN_0215b008(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffef000) {
    return;
  }
  iVar1 = (**(code **)*param_2)();
  if (iVar1 == 4) {
    FUN_0207342c(0x78,1);
    piVar2 = *(int **)(*(int *)(iVar3 + 8) + 4);
    (**(code **)(*piVar2 + 0x148))(piVar2,0x20);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 8) + 4));
    return;
  }
  return;
}

