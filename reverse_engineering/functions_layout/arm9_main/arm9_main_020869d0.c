
undefined4 FUN_020869d0(int param_1)

{
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x20) != '\0') {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x24) = 1;
  }
  return 1;
}

