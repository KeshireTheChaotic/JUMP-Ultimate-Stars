
undefined4 FUN_02164b54(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0216e828 + 0x40) - 4U < 3) {
    return 1;
  }
  iVar1 = FUN_02059250(0x2164a6d);
  if (iVar1 == 2) {
    *(undefined2 *)(DAT_0216e828 + 0x50) = 0;
    *(undefined2 *)(DAT_0216e828 + 0x52) = 1;
    return 1;
  }
  FUN_02164ca4();
  return 0;
}

