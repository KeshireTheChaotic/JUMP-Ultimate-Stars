
int FUN_0219286c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(DAT_020aab78 + 0xa4);
  OS_DisableInterrupts();
  if (iVar4 == 0) {
    iVar4 = DAT_021a9d58 << 1;
  }
  else {
    uVar3 = (uint)*(ushort *)(iVar4 + 0x2e);
    if ((uVar3 == 0) || (uVar2 = (uint)*(ushort *)(iVar4 + 0x2c), uVar2 == 0)) {
      iVar4 = DAT_021a9d58 << 1;
    }
    else {
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      if ((int)DAT_021a9d58 < (int)uVar3) {
        uVar3 = DAT_021a9d58;
      }
      iVar4 = uVar3 << 1;
    }
  }
  OS_RestoreInterrupts();
  if ((iVar4 < 1) || (iVar1 = FUN_0200d12c(param_1,iVar4), iVar1 < 1)) {
    return param_1;
  }
  return iVar1 * iVar4;
}

