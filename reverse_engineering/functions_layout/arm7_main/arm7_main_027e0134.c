
int FUN_027e0134(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  OS_DisableInterrupts();
  if (DAT_027f97ec != 0) {
    for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
      iVar1 = iVar3 * 0x10;
      if ((*(uint *)(DAT_027f97ec + iVar3 * 0x10 + 0xd0) & 0x8000) != 0) {
        iVar3 = DAT_027f97ec + 0xd0;
        iVar2 = iVar3 + iVar1;
        *(uint *)(iVar3 + iVar1) = *(uint *)(iVar3 + iVar1) & 0xffff7fff;
        break;
      }
    }
  }
  OS_RestoreInterrupts();
  return iVar2;
}

