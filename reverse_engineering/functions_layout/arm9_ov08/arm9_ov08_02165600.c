
undefined4 FUN_02165600(void)

{
  char cVar1;
  
  cVar1 = *(char *)(DAT_0216e82c + 0xa90);
  if (((cVar1 == '\x01') || (cVar1 == '\x1a')) || (cVar1 == '\x1d')) {
    FUN_02165640();
    FUN_021643b0();
    *(undefined1 *)(DAT_0216e82c + 0xa90) = 2;
    return 1;
  }
  return 0;
}

