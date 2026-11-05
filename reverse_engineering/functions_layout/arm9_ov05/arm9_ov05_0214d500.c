
uint FUN_0214d500(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_02076c98();
  if (iVar1 != 0) {
    iVar1 = FUN_02076d00();
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      for (uVar3 = 0; (int)uVar3 < 5; uVar3 = uVar3 + 1) {
        if (*(char *)(iVar1 + iVar2 * 5 + uVar3) == '\x01') {
          return uVar3 & 0xff;
        }
      }
    }
  }
  return 0;
}

