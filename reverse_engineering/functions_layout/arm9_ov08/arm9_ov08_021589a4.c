
void FUN_021589a4(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  puVar3 = &DAT_0216a928;
  do {
    iVar1 = FUN_02166d70(puVar3);
    if (iVar1 != 0) {
      FUN_02154470(1);
      DAT_0216e72c = (undefined1)uVar2;
      uVar2 = uVar2 & 0xff;
      FUN_021547e4((&DAT_0216a940)[uVar2 * 4],(&DAT_0216a944)[uVar2 * 4],(&DAT_0216a942)[uVar2 * 4],
                   (&DAT_0216a946)[uVar2 * 4]);
      return;
    }
    puVar3 = puVar3 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
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
    FUN_021587a4(1);
    return;
  }
  iVar1 = FUN_02166e24(0x80);
  if (iVar1 != 0) {
    FUN_021587a4(3);
  }
  return;
}

