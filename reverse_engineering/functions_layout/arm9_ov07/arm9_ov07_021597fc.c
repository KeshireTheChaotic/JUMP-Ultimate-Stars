
int FUN_021597fc(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = 0;
  pcVar4 = (char *)(DAT_0216ad78 + 0xa64);
  do {
    cVar1 = *pcVar4;
    iVar5 = iVar5 + 1;
    cVar2 = '\0';
    if (cVar1 != '\0') {
      cVar2 = pcVar4[0x20];
    }
    pcVar4 = pcVar4 + 0x22;
    if (cVar1 != '\0' && cVar2 != '\0') {
      iVar3 = iVar3 + 1;
    }
  } while (iVar5 < 0xb);
  return iVar3;
}

