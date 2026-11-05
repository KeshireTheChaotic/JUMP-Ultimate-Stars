
undefined4 FUN_020779a4(int param_1)

{
  *(char *)(param_1 + 0x5cc) = *(char *)(param_1 + 0x5cc) + '\x01';
  if ('\x10' < *(char *)(param_1 + 0x5cc)) {
    *(undefined1 *)(param_1 + 0x5cc) = 0x10;
  }
  return 1;
}

