
int FUN_02157f9c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 100);
  piVar2 = *(int **)(iVar1 + 0x2c);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_02036430(*(undefined4 *)(iVar1 + 0x20));
  }
  if (piVar2[6] == 0) {
    (**(code **)(*piVar2 + 0x10))();
  }
  return piVar2[6];
}

