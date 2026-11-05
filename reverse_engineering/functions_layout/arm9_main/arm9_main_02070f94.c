
int FUN_02070f94(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_02070fb4(iVar3);
    if (iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x3a0);
  return iVar2;
}

