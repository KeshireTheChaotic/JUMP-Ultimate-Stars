
int FUN_0208bce4(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(char *)(DAT_0214ccec + uVar2 + 0x30) != -1) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return iVar1;
}

