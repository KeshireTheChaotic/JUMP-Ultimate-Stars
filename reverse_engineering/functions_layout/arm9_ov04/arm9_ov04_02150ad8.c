
void FUN_02150ad8(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar4 = *(int *)(iVar1 + 0x2c);
  uVar2 = *(uint *)(iVar1 + 0x30);
  uVar3 = iVar4 * 100;
  if (uVar3 < uVar2) {
    if (*(int *)(iVar1 + 0x34) + uVar3 < uVar2) {
      *(uint *)(iVar1 + 0x30) = uVar2 - *(int *)(iVar1 + 0x34);
      FUN_02150874();
      return;
    }
    *(int *)(iVar1 + 0x28) = iVar4;
    FUN_021503b4();
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_02150ad4);
    return;
  }
  if (uVar3 <= uVar2) {
    *(int *)(iVar1 + 0x28) = iVar4;
    FUN_021503b4();
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_02150ad4);
    return;
  }
  uVar2 = uVar2 + *(int *)(iVar1 + 0x34);
  *(uint *)(iVar1 + 0x30) = uVar2;
  if (uVar2 < (uint)(*(int *)(iVar1 + 0x2c) * 100)) {
    FUN_02150874();
    return;
  }
  *(int *)(iVar1 + 0x28) = *(int *)(iVar1 + 0x2c);
  FUN_021503b4();
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_02150ad4);
  return;
}

