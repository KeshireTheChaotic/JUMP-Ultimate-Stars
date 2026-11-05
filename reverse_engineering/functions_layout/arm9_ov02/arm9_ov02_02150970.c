
void FUN_02150970(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar4 = (*(int **)(param_1 + 4))[4];
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x194))();
  iVar1 = *(int *)(iVar1 * 0x24 +
                   *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x15c) + 8) + 0x20) + 0x18);
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(*(int *)(iVar4 + 0x88) + 0x30); iVar5 = iVar5 + 1) {
    uVar3 = (uint)*(byte *)(*(int *)(iVar4 + 0x88) + iVar5 + 0x31);
    bVar6 = (*(byte *)(uVar3 * 0x88 + *(int *)(*(int *)(iVar4 + 0x84) + 0x3c) + 0xc) & 4) != 0;
    if (bVar6) {
      uVar3 = 0x10006;
    }
    iVar2 = *(int *)(iVar4 + iVar5 * 4 + 0x1c);
    if (!bVar6) {
      uVar3 = 0x10005;
    }
    if (iVar1 == iVar2) {
      uVar3 = uVar3 + 2;
    }
    FUN_02023894(*(undefined4 *)(iVar2 + 4),uVar3,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + iVar5 * 4 + 0x1c) + 4) + 0x68) + 0x6c))();
  }
  FUN_0206af1c(*(undefined4 *)(iVar4 + 0x7c));
  return;
}

