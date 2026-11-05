
int FUN_021597b4(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar3 = 0;
  pcVar2 = (char *)(DAT_0216ad78 + 0xa64);
  do {
    if ((*pcVar2 != '\0') && (pcVar2[0x20] == '\0')) {
      iVar1 = iVar1 + 1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 0x22;
  } while (iVar3 < 0xb);
  return iVar1;
}

