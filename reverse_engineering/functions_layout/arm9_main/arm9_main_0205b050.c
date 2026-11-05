
int FUN_0205b050(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 1;
  iVar1 = 0;
  do {
    if ((DAT_020ad628 & uVar2) == 0) {
      DAT_020ad628 = DAT_020ad628 | uVar2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 << 1;
  } while (iVar1 < 8);
  return -1;
}

