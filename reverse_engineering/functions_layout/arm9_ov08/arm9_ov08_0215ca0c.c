
void FUN_0215ca0c(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    cVar1 = *(char *)(DAT_0216e794 + iVar2 + 4);
    if (cVar1 != '\0') {
      *(char *)(DAT_0216e794 + iVar2 + 4) = cVar1 + -1;
      if (*(char *)(DAT_0216e794 + iVar2 + 4) == '\0') {
        FUN_0215d660();
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

