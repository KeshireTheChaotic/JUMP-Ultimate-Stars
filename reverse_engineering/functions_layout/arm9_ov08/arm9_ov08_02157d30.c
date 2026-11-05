
void FUN_02157d30(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  uVar2 = 0;
  puVar3 = &DAT_0216a8a8;
  do {
    iVar1 = FUN_02166d70(puVar3);
    if (iVar1 != 0) {
      FUN_02154470(1);
      DAT_0216e720 = (undefined1)uVar2;
      uVar2 = uVar2 & 0xff;
      FUN_021547e4((&DAT_0216a8b8)[uVar2 * 4],(&DAT_0216a8bc)[uVar2 * 4],(&DAT_0216a8ba)[uVar2 * 4],
                   (&DAT_0216a8be)[uVar2 * 4]);
      return;
    }
    puVar3 = puVar3 + 8;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
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
    FUN_02157bd4(1);
    return;
  }
  iVar1 = FUN_02166e24(0x80);
  if (iVar1 != 0) {
    FUN_02157bd4(3);
    return;
  }
  iVar1 = FUN_02166e24(0x20);
  if (iVar1 != 0) {
    FUN_02157bd4(0);
    return;
  }
  iVar1 = FUN_02166e24(0x10);
  if (iVar1 != 0) {
    FUN_02157bd4(2);
  }
  return;
}

