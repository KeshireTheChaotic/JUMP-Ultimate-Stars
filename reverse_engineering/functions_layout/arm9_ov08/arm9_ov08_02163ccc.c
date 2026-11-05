
void FUN_02163ccc(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_021639dc(3);
  uVar3 = 1;
  do {
    uVar2 = 1 << (uVar3 & 0xff);
    if (((*(ushort *)(DAT_0216e808 + 2) & uVar2) != 0) &&
       ((*(ushort *)(DAT_0216e808 + 4) & uVar2) == 0)) {
      if ((*(ushort *)(DAT_0216e808 + 6) & uVar2) == 0) {
        uVar1 = ~(ushort)uVar2;
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
        FUN_02163d58(uVar3);
      }
    }
    uVar3 = uVar3 + 1 & 0xffff;
  } while (uVar3 < 0x10);
  return;
}

