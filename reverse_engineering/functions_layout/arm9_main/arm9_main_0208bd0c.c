
int FUN_0208bd0c(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    cVar1 = *(char *)(DAT_0214ccec + uVar3 + 0x30);
    if ((-1 < cVar1) && (cVar1 < '\x04')) {
      iVar2 = iVar2 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return iVar2;
}

