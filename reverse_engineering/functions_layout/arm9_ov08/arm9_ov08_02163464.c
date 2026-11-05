
void FUN_02163464(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  
  iVar3 = 0;
  uVar2 = (uint)*(byte *)(DAT_0216e804 + 0x1c);
  if ((&DAT_0216ae24)[uVar2] != '\0') {
    do {
      FUN_02166868(uVar2 * 8 + 0x216aebc + (uint)(byte)(&DAT_0216ae3c)[iVar3 + uVar2 * 2] * 4,
                   uVar2 * 4 + 0x216ae60,auStack_20);
      iVar1 = FUN_02166d70(auStack_20);
      if (iVar1 != 0) {
        *(char *)(DAT_0216e804 + 0x1b) = (char)iVar3;
        break;
      }
      iVar3 = iVar3 + 1;
      uVar2 = (uint)*(byte *)(DAT_0216e804 + 0x1c);
    } while (iVar3 < (int)(uint)(byte)(&DAT_0216ae24)[uVar2]);
  }
  iVar3 = FUN_02166e40(1);
  if (iVar3 != 0) {
    *(undefined *)(DAT_0216e804 + 0x1b) = (&DAT_0216ae48)[(uint)*(byte *)(DAT_0216e804 + 0x1c) * 2];
  }
  iVar3 = FUN_02166e40(2);
  if (iVar3 != 0) {
    *(undefined *)(DAT_0216e804 + 0x1b) = (&DAT_0216ae49)[(uint)*(byte *)(DAT_0216e804 + 0x1c) * 2];
  }
  iVar3 = 0;
  if ((&DAT_0216ae24)[*(byte *)(DAT_0216e804 + 0x1c)] != '\0') {
    do {
      if (iVar3 == *(char *)(DAT_0216e804 + 0x1b)) {
        FUN_02163238();
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)(byte)(&DAT_0216ae24)[*(byte *)(DAT_0216e804 + 0x1c)]);
  }
  *(undefined1 *)(DAT_0216e804 + 0x1b) = 0xff;
  return;
}

