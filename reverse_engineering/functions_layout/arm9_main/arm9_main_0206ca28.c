
void FUN_0206ca28(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *param_3;
  piVar1 = *(int **)(param_1 + 0x50);
  piVar1[3] = *param_2;
  piVar1[4] = iVar2;
  if (*(byte *)(piVar1 + 9) != (*(byte *)(piVar1 + 9) | 1)) {
    (**(code **)(*piVar1 + 0x18))();
  }
  *(byte *)(piVar1 + 9) = *(byte *)(piVar1 + 9) | 0x31;
  return;
}

