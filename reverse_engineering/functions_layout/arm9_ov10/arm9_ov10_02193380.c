
uint FUN_02193380(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar2 = FUN_0219346c();
  if (iVar2 != 0) {
    return 0x80;
  }
  if ((*(ushort *)(param_1 + 0x70) & 0x40) != 0) {
    uVar4 = 0x20;
  }
  if ((*(char *)(param_1 + 0x73) == '\x01') || ((*(ushort *)(param_1 + 0x70) & 4) != 0)) {
    uVar3 = OS_DisableInterrupts();
    iVar2 = FUN_0219334c(param_1);
    if (0 < iVar2) {
      uVar4 = uVar4 | 1;
    }
    iVar2 = FUN_02192aec(param_1);
    if (0 < iVar2) {
      uVar4 = uVar4 | 8;
    }
    OS_RestoreInterrupts(uVar3);
  }
  bVar1 = true;
  if ((*(char *)(param_1 + 0x73) != '\0') && (*(char *)(param_1 + 0x73) != '\x04')) {
    bVar1 = false;
  }
  if (bVar1) {
    if ((((*(ushort *)(param_1 + 0x70) & 4) != 0) && (*(char *)(param_1 + 8) != '\x04')) &&
       ((uVar4 & 1) == 0)) {
      *(ushort *)(param_1 + 0x70) = *(ushort *)(param_1 + 0x70) & 0xfff9;
    }
    if (((*(ushort *)(param_1 + 0x70) & 2) == 0) && ((*(ushort *)(param_1 + 0x70) & 4) == 0)) {
      uVar4 = uVar4 | 0x40;
    }
  }
  return uVar4;
}

