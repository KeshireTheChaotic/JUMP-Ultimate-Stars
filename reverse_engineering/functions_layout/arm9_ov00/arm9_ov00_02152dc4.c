
undefined4 FUN_02152dc4(int param_1)

{
  if (*(uint *)(param_1 + 0x110) <= *(uint *)(param_1 + 0x114)) {
    return 0;
  }
  *(uint *)(param_1 + 0x114) = *(uint *)(param_1 + 0x114) + 1;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return 1;
}

