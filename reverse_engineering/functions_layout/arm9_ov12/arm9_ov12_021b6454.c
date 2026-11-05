
void FUN_021b6454(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x50);
  piVar1[4] = *param_2;
  if (*(byte *)(piVar1 + 9) != (*(byte *)(piVar1 + 9) | 1)) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) | 0x31;
  return;
}

