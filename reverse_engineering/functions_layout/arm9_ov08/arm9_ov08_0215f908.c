
void FUN_0215f908(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  puVar3 = &DAT_0216abe4;
  do {
    iVar1 = FUN_02166d70(puVar3);
    if (iVar1 != 0) {
      FUN_02154470(1);
      DAT_0216e7b0 = (undefined1)uVar2;
      FUN_0215f62c();
      return;
    }
    puVar3 = puVar3 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  iVar1 = FUN_02166e40(1);
  if (iVar1 != 0) {
    FUN_02154470(1);
    return;
  }
  iVar1 = FUN_02166e40(2);
  if (iVar1 != 0) {
    FUN_02154470(0);
    return;
  }
  iVar1 = FUN_02166e24(0x40);
  if (iVar1 != 0) {
    FUN_0215f4d8(1);
    return;
  }
  iVar1 = FUN_02166e24(0x80);
  if (iVar1 != 0) {
    FUN_0215f4d8(3);
    return;
  }
  iVar1 = FUN_02166e24(0x20);
  if (iVar1 != 0) {
    FUN_0215f4d8(0);
    return;
  }
  iVar1 = FUN_02166e24(0x10);
  if (iVar1 != 0) {
    FUN_0215f4d8(2);
  }
  return;
}

