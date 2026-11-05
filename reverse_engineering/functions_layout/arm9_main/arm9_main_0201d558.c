
void FUN_0201d558(int param_1)

{
  int iVar1;
  short sVar2;
  uint uVar3;
  short sVar4;
  
  if (*(ushort *)(param_1 + 0x14) < 2) {
    return;
  }
  FUN_02017004(param_1 + 4,*(undefined4 *)(param_1 + 0xc));
  uVar3 = 1;
  while (uVar3 < *(ushort *)(param_1 + 0x14)) {
    iVar1 = uVar3 * *(int *)(param_1 + 0x10);
    sVar2 = *(short *)(*(int *)(param_1 + 0xc) + iVar1);
    iVar1 = *(int *)(param_1 + 0xc) + iVar1;
    uVar3 = uVar3 + 1;
    sVar4 = *(short *)(param_1 + 4);
    if (sVar2 <= *(short *)(param_1 + 4)) {
      sVar4 = sVar2;
    }
    *(short *)(param_1 + 4) = sVar4;
    sVar2 = *(short *)(param_1 + 6);
    if (*(short *)(iVar1 + 2) <= *(short *)(param_1 + 6)) {
      sVar2 = *(short *)(iVar1 + 2);
    }
    *(short *)(param_1 + 6) = sVar2;
    sVar2 = *(short *)(param_1 + 8);
    if (*(short *)(param_1 + 8) <= *(short *)(iVar1 + 4)) {
      sVar2 = *(short *)(iVar1 + 4);
    }
    *(short *)(param_1 + 8) = sVar2;
    sVar2 = *(short *)(param_1 + 10);
    if (*(short *)(param_1 + 10) <= *(short *)(iVar1 + 6)) {
      sVar2 = *(short *)(iVar1 + 6);
    }
    *(short *)(param_1 + 10) = sVar2;
  }
  return;
}

