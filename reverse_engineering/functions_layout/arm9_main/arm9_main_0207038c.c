
void FUN_0207038c(void)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  
  iVar1 = iRam020703b4;
  uVar3 = 0;
  do {
    uVar2 = FUN_02072300(uVar3);
    *(undefined1 *)(iVar1 + uVar3) = uVar2;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  return;
}

