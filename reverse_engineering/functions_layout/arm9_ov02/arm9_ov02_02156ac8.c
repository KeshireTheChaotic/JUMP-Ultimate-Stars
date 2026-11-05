
void FUN_02156ac8(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0203b414(2);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  iVar1 = FUN_0203b414(3);
  piVar2 = *(int **)(*(int *)(iVar1 + 0x88) + 4);
  (**(code **)(*piVar2 + 0x94))(piVar2,0);
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  iVar1 = 0;
  do {
    if ((int *)param_1[iVar1 + 2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar1 + 2] + 8))();
    }
    if (param_1[iVar1 + 4] != 0) {
      FUN_0206b138();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  FUN_0201b244(param_1);
  return;
}

