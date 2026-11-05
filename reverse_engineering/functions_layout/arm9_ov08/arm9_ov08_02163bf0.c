
void FUN_02163bf0(void)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  uVar3 = 1;
  do {
    uVar4 = 1 << (uVar3 & 0xff);
    if ((*(ushort *)(DAT_0216e808 + 10) & uVar4) != 0) {
      iVar2 = func_0x021be9f0(uVar3,3);
      if (iVar2 == 0) {
        uVar1 = ~(ushort)uVar4;
        OS_DisableInterrupts();
        *(ushort *)(DAT_0216e808 + 2) = *(ushort *)(DAT_0216e808 + 2) & uVar1;
        *(ushort *)(DAT_0216e808 + 4) = *(ushort *)(DAT_0216e808 + 4) & uVar1;
        *(ushort *)(DAT_0216e808 + 6) = *(ushort *)(DAT_0216e808 + 6) & uVar1;
        *(ushort *)(DAT_0216e808 + 8) = *(ushort *)(DAT_0216e808 + 8) & uVar1;
        *(ushort *)(DAT_0216e808 + 10) = *(ushort *)(DAT_0216e808 + 10) & uVar1;
        *(ushort *)(DAT_0216e808 + 0xc) = *(ushort *)(DAT_0216e808 + 0xc) & uVar1;
        OS_RestoreInterrupts();
        func_0x021bfd64(uVar3);
      }
      else {
        uVar5 = uVar5 | uVar4 & 0xffff;
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 0x10);
  if (uVar5 == 0) {
    FUN_021639dc(7);
    return;
  }
  FUN_021639dc(4);
  return;
}

