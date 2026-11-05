
undefined4 FUN_0214fd84(int param_1,int param_2)

{
  if (*(char *)(param_1 + 200) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xc9) == '\0') {
    return 0;
  }
  if (*(int *)(param_1 + 0x4c + param_2 * 4) == 0) {
    *(undefined4 *)(param_1 + 0x4c + param_2 * 4) = *(undefined4 *)(param_1 + 0x18);
  }
  return 1;
}

