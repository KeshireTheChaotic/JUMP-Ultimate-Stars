
undefined4 FUN_02175a60(void)

{
  if (DAT_021a73f4 == (int *)0x0) {
    return 0;
  }
  if (*DAT_021a73f4 == 0) {
    return 0;
  }
  *(undefined2 *)(DAT_021a73f4 + 1) = 3;
  FUN_021759a4();
  return 1;
}

