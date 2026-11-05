
void FUN_0217cc00(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = -1;
  do {
    iVar1 = FUN_02178448();
    if ((1 << (uVar2 & 0xff) & *(uint *)(iVar1 + 0x2e8)) != 0) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x20);
  if (iVar3 == -1) {
    iVar3 = FUN_02178448();
    *(undefined1 *)(iVar3 + 0xe) = 0;
    return;
  }
  iVar1 = FUN_02178448();
  *(char *)(iVar1 + 0xe) = (char)iVar3;
  return;
}

