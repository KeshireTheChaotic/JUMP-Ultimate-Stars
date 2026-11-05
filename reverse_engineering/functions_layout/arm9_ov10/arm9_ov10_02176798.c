
undefined4 FUN_02176798(void)

{
  int iVar1;
  
  if ((DAT_021a7410 != (undefined4 *)0x0) && (iVar1 = FUN_0217575c(), iVar1 == 0)) {
    if ((DAT_021a7410[9] == 5) || (DAT_021a7410[9] == 6)) {
      if (*(char *)((int)DAT_021a7410 + 0x361) == '\0') {
        FUN_02177ea4(1,&DAT_021a4acc,0);
        FUN_0218cd38();
        FUN_0217643c(3);
        return 1;
      }
      *(undefined1 *)((int)DAT_021a7410 + 0x2d) = 1;
      FUN_0218a888(*DAT_021a7410);
      *(undefined1 *)((int)DAT_021a7410 + 0x2d) = 0;
      return 0;
    }
  }
  return 0xffffffff;
}

