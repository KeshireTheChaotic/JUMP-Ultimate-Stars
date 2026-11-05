
int FUN_0214e690(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = 0;
  while (uVar3 < *(uint *)(DAT_0214bd80 + 0x18ec)) {
    iVar1 = uVar3 * 0xc;
    uVar3 = uVar3 + 1;
    if (*(char *)(iVar1 + *(int *)(DAT_0214bd80 + 0x30) + 6) == '\x02') {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

