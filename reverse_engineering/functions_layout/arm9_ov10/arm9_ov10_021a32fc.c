
undefined4 FUN_021a32fc(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = DAT_021abd8c;
  if (DAT_021abd8c == 0) {
    return 0;
  }
  iVar3 = FUN_0219a12c();
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar2 + 0xd);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar2 + 0xb);
    }
    if (bVar4 && cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}

