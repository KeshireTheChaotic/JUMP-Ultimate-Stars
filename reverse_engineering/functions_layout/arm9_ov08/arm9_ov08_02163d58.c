
void FUN_02163d58(uint param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = func_0x021be9f0(param_1,2);
  if (iVar2 == 0) {
    uVar1 = ~(ushort)(1 << (param_1 & 0xff));
    OS_DisableInterrupts();
    *(ushort *)(DAT_0216e808 + 2) = *(ushort *)(DAT_0216e808 + 2) & uVar1;
    *(ushort *)(DAT_0216e808 + 4) = *(ushort *)(DAT_0216e808 + 4) & uVar1;
    *(ushort *)(DAT_0216e808 + 6) = *(ushort *)(DAT_0216e808 + 6) & uVar1;
    *(ushort *)(DAT_0216e808 + 8) = *(ushort *)(DAT_0216e808 + 8) & uVar1;
    *(ushort *)(DAT_0216e808 + 10) = *(ushort *)(DAT_0216e808 + 10) & uVar1;
    *(ushort *)(DAT_0216e808 + 0xc) = *(ushort *)(DAT_0216e808 + 0xc) & uVar1;
    OS_RestoreInterrupts();
    func_0x021bfd64(param_1);
    return;
  }
  OS_DisableInterrupts();
  uVar1 = (ushort)(1 << (param_1 & 0xff));
  *(ushort *)(DAT_0216e808 + 6) = *(ushort *)(DAT_0216e808 + 6) & ~uVar1;
  *(ushort *)(DAT_0216e808 + 8) = *(ushort *)(DAT_0216e808 + 8) | uVar1;
  OS_RestoreInterrupts();
  return;
}

