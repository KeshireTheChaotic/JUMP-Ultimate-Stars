
void FUN_0217eb88(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  if (*(char *)(param_1 + 0x7a) < 0) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return;
  }
  uVar1 = 1;
  iVar3 = **(int **)(iVar2 + *(char *)(param_1 + 0x7a) * 4 + 0x98) -
          **(int **)(iVar2 + (*(uint *)(param_1 + 0xd4) >> 0x1c) * 4 + 0x98) >> 8;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if ((0x4f < iVar3) && (iVar3 = FUN_0217ec64(*(undefined4 *)(param_1 + 0x24)), -1 < iVar3)) {
    uVar1 = FUN_0217ec64(*(undefined4 *)(param_1 + 0x24));
  }
  iVar3 = FUN_0217aa8c(param_1,*(undefined1 *)(param_1 + 0x7a),uVar1);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    return;
  }
  uVar4 = FUN_0217ec78(*(undefined4 *)(param_1 + 0x24));
  FUN_02177010(uVar4,*(undefined4 *)(iVar2 + *(char *)(param_1 + 0x7a) * 4 + 0x98));
  *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 0x100;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  *(undefined1 *)(param_1 + 0x105) = 2;
  return;
}

