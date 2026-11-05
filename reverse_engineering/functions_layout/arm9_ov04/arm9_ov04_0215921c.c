
void FUN_0215921c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != -0x7ffeefff) {
    return;
  }
  uVar2 = (**(code **)*param_2)();
  if ((uVar2 & 4) == 0) {
    return;
  }
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,1);
  piVar3[7] = 0;
  func_0x021b6214(*(undefined4 *)(*piVar3 + 4));
  (**(code **)(**(int **)(*piVar3 + 4) + 0xd8))(*(int **)(*piVar3 + 4),0);
  func_0x021b65d8(*(undefined4 *)(*piVar3 + 4));
  return;
}

