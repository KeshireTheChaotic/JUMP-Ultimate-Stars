
int * FUN_021b67a4(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_021b5338(param_1,*(undefined4 *)(param_1 + 0xb4));
  if (*(int **)(iVar1 + 8) == (int *)0x0) {
    return (int *)0x0;
  }
  piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 8) + 0x134))();
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  return piVar2;
}

