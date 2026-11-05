
void FUN_0215152c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar1 = FUN_0214ff0c(*(undefined4 *)(*(int *)(param_1 + 4) + 0x15c),param_3);
  iVar2 = FUN_021517ec(iVar6,uVar1);
  piVar3 = *(int **)(*(int *)(param_2 + 4) + 100);
  (**(code **)(*piVar3 + 0xac))(piVar3,iVar2 * 5 + 1);
  iVar5 = param_3 * 0x24 + *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x15c) + 8) + 0x20);
  bVar9 = (*(uint *)(iVar5 + 8) & 1) == 0;
  if (bVar9) {
    iVar5 = iVar5 + 9;
  }
  piVar3 = *(int **)(*(int *)(param_2 + 4) + 100);
  if (!bVar9) {
    iVar5 = *(int *)(iVar5 + 0x10);
  }
  (**(code **)(*piVar3 + 0x68))(piVar3,iVar5);
  piVar3 = *(int **)(*(int *)(*(int *)(iVar6 + 0x4c) + 4) + 100);
  iVar5 = ((uint)(int)*(short *)(*(int *)(*(int *)(param_2 + 4) + 100) + 0x106) >> 4) * 2;
  iVar4 = (**(code **)(*piVar3 + 0x70))(piVar3,0,iVar5 + 4);
  if (iVar2 + 0xb == iVar4) {
    return;
  }
  uVar7 = 0;
  do {
    uVar8 = 0;
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(iVar6 + 0x4c) + 4) + 100);
      (**(code **)(*piVar3 + 0x88))(piVar3,uVar8,uVar7 + iVar5 + 4,iVar2 + 0xb);
      uVar8 = uVar8 + 1;
    } while (uVar8 < 0x1c);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return;
}

