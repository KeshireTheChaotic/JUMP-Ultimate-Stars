
void FUN_0219ca5c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 2;
  do {
    iVar2 = iVar1;
    if (*(char *)(DAT_0214ccf8 + iVar1 + 0x8e0) == -1) {
      while (iVar2 = iVar2 + 1, iVar2 < 4) {
        *(undefined1 *)(DAT_0214ccf8 + iVar2 + 0x8df) =
             *(undefined1 *)(DAT_0214ccf8 + iVar2 + 0x8e0);
        *(undefined1 *)(DAT_0214ccf8 + iVar2 + 0x8e0) = 0xff;
      }
    }
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}

