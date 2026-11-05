
void FUN_0205a188(int param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x1c);
  if (iVar4 == 0) {
    return;
  }
  if (*(short *)(param_1 + 2) != 0) {
    *(undefined2 *)(iVar4 + 0x81c) = 5;
    return;
  }
  uVar2 = *(ushort *)(param_1 + 4);
  if (uVar2 < 0x16) {
    if (0x14 < uVar2) {
      FUN_02059f44(iVar4,*(undefined2 *)(param_1 + 0x12),*(undefined4 *)(param_1 + 0xc));
      FUN_02059dd0(iVar4,0);
      return;
    }
    if (9 < uVar2) {
      return;
    }
    if (uVar2 < 7) {
      return;
    }
    if (uVar2 == 7) {
      FUN_02059dd0(iVar4,0);
      return;
    }
    if (uVar2 != 9) {
      return;
    }
  }
  else {
    if (0x1a < uVar2) {
      return;
    }
    if (uVar2 < 0x19) {
      return;
    }
    if (uVar2 == 0x19) {
      return;
    }
    if (uVar2 != 0x1a) {
      return;
    }
  }
  uVar2 = *(ushort *)(param_1 + 0x12);
  OS_DisableInterrupts();
  uVar3 = *(ushort *)(iVar4 + 0x808);
  uVar2 = ~(ushort)(1 << (uVar2 & 0xff));
  iVar1 = (uint)uVar3 * 0x200;
  *(ushort *)(iVar4 + iVar1) = *(ushort *)(iVar4 + iVar1) & uVar2;
  if (*(short *)(iVar4 + 0x818) == 1) {
    iVar1 = (uVar3 + 1 & 3) * 0x200;
    *(ushort *)(iVar4 + iVar1) = *(ushort *)(iVar4 + iVar1) & uVar2;
  }
  OS_RestoreInterrupts();
  FUN_02059dd0(iVar4,0);
  if (*(short *)(iVar4 + 0x818) == 1) {
    FUN_02059dd0(iVar4,0);
    return;
  }
  return;
}

