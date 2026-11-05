
void FUN_0219da90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = -1;
  uVar3 = 0;
  do {
    iVar4 = (int)*(short *)(*piRam0219dafc + uVar3 * 2 + 0x1c30);
    if (-1 < iVar4) {
      if (iVar1 < 0) {
        iVar1 = iVar4;
      }
      else {
        if (iVar4 < iVar1) {
          iVar2 = (iVar4 + 0x8000) - iVar1;
        }
        else {
          iVar2 = iVar4 - iVar1;
        }
        if ((iVar2 < 0x3fff) && (0 < iVar2)) {
          iVar1 = iVar4;
        }
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 4);
  return;
}

