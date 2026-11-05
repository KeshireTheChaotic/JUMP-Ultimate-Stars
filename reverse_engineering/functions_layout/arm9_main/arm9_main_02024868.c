
void FUN_02024868(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(byte *)((int)param_1 + 0x29) & 0x3f) >> 5 != 0) {
    iVar1 = (**(code **)(*param_1 + 0xc0))();
    iVar2 = (**(code **)(**(int **)(iVar1 + 0x30) + 0x10))();
    if (iVar2 != 0) {
      (**(code **)(**(int **)(iVar1 + 0x30) + 0x60))(*(int **)(iVar1 + 0x30),1,FUN_02024a68,0);
    }
  }
  piVar3 = (int *)(**(code **)(*param_1 + 0xc0))(param_1,param_2);
  (**(code **)(*piVar3 + 0xe8))(piVar3,0);
  (**(code **)(*param_1 + 0xc0))(param_1,param_2);
  FUN_020288a4();
  FUN_02038010(param_1 + 0x1b,param_2 + -1);
  return;
}

