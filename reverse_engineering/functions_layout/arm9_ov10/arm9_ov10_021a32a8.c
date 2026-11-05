
int FUN_021a32a8(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  
  iVar2 = DAT_021abd8c;
  if (DAT_021abd8c == 0) {
    return 1;
  }
  iVar3 = FUN_0219a12c(&DAT_021abd8c);
  bVar4 = *(char *)(iVar2 + 0xd) == '\0';
  cVar1 = '\0';
  if (!bVar4) {
    cVar1 = *(char *)(iVar2 + 8);
  }
  bVar5 = iVar3 == 0;
  bVar6 = *(char *)(iVar2 + 0xb) == '\0';
  if ((!bVar5 || !bVar6) || !bVar4 && cVar1 != '\0') {
    iVar3 = 1;
  }
  if ((bVar5 && bVar6) && (bVar4 || cVar1 == '\0')) {
    iVar3 = 0;
  }
  return iVar3;
}

