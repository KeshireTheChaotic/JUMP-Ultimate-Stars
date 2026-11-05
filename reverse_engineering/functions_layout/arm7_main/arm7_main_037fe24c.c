
void FUN_037fe24c(int param_1)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x14) = DAT_03808488;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (DAT_03808488 == 0) {
    DAT_03808484 = param_1;
    DAT_03808488 = param_1;
    FUN_037fe074();
  }
  else {
    piVar1 = (int *)(DAT_03808488 + 0x18);
    DAT_03808488 = param_1;
    *piVar1 = param_1;
  }
  return;
}

