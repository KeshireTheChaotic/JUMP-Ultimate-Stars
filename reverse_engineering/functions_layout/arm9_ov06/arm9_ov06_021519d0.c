
void FUN_021519d0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x50);
  piVar2[3] = *param_2;
  piVar2[4] = iVar1;
  if (*(byte *)(piVar2 + 9) != (*(byte *)(piVar2 + 9) | 1)) {
    (**(code **)(*piVar2 + 0x18))();
  }
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) | 0x31;
  return;
}

