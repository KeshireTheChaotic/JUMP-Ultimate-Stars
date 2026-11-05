
undefined4 FUN_02077bb4(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x5d7 + param_2) == -1) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x5f3) = 1;
  *(char *)(param_1 + 0x5f5) = *(char *)(param_1 + 0x5d7 + param_2) * '0' + '\b';
  *(char *)(param_1 + 0x5f6) = *(char *)(param_1 + param_2 + 0x5da) * '0';
  return 1;
}

