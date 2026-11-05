
void FUN_021b80f4(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x40) != '\0') {
    (**(code **)(*piVar1 + 0x144))();
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  FUN_021b6110(piVar1);
  FUN_021b619c(piVar1);
  FUN_021b63b0(piVar1);
  return;
}

