
void FUN_02020d2c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    piVar1 = (int *)FUN_02011b38();
    (**(code **)(*piVar1 + 0x58))();
    return;
  }
  FUN_02011b38();
  (**(code **)(param_1 + 0xa8))();
  return;
}

