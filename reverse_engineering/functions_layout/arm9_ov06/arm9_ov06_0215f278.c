
void FUN_0215f278(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x174);
  if (*(int *)(*piVar1 + 0xc) != 0) {
    FUN_0206cf38();
  }
  *(int *)(param_1 + 0x1bc) = param_2;
  iVar2 = *piVar1;
  FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 4),*(int *)(iVar2 + 0x88) + param_2,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 0xc) + 4) + 0x68) + 0x6c))();
  return;
}

