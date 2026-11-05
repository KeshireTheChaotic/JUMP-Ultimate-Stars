
void FUN_02035bbc(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_020a0d94 < 8) {
    (&DAT_020a19c4)[DAT_020a0d94] = param_1;
    DAT_020a0d94 = DAT_020a0d94 + 1;
  }
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe | 1;
  piVar2 = *(int **)(param_1 + 0x24);
  if (piVar2 == (int *)0x0) {
    return;
  }
  while (piVar2 != (int *)0x0) {
    piVar1 = (int *)(**(code **)(*piVar2 + 0x10))();
    FUN_02035bbc(piVar2);
    piVar2 = piVar1;
  }
  return;
}

