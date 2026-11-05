
void FUN_020322fc(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 8);
  for (piVar2 = (int *)piVar1[2]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar1 + 0x5c))();
    piVar1 = piVar2;
  }
  return;
}

