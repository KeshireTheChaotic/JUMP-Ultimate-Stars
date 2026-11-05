
void FUN_02086d30(void)

{
  if (*(char *)(iRam02086d5c + 0x28) == '\0') {
    return;
  }
  FUN_0208b784(1);
  *(undefined1 *)(iRam02086d5c + 0x28) = 0;
  return;
}

