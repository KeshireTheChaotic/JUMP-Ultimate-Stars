
undefined4 FUN_021a3348(void)

{
  char cVar1;
  bool bVar2;
  
  if (DAT_021abd8c == 0) {
    return 0;
  }
  if (*(char *)(DAT_021abd8c + 10) != '\0') {
    cVar1 = *(char *)(DAT_021abd8c + 0xc);
    bVar2 = cVar1 == '\0';
    if (bVar2) {
      cVar1 = *(char *)(DAT_021abd8c + 0xd);
    }
    if (!bVar2 || cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

