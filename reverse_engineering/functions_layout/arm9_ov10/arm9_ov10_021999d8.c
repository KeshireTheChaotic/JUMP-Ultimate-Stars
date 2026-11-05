
undefined4 FUN_021999d8(int param_1)

{
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    *(code **)(param_1 + 8) = OS_IrqHandler;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  if (*(code **)(param_1 + 8) == OS_IrqHandler) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
    return 1;
  }
  return 0;
}

