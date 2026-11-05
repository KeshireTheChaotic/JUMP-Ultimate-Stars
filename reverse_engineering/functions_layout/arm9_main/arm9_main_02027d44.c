
void FUN_02027d44(int param_1)

{
  int *piVar1;
  
  FUN_01ff8000(*(undefined4 *)(param_1 + 0x2c));
  piVar1 = *(int **)(param_1 + 0x2c);
  if ((char)piVar1[1] == '\0') {
    return;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

