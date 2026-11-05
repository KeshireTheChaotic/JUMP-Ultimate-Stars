
void FUN_02150d9c(int param_1,undefined2 param_2,undefined2 param_3)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x2e) = param_2;
  *(undefined2 *)(param_1 + 0x30) = param_3;
  sVar1 = *(short *)(param_1 + 0x2a);
  sVar2 = *(short *)(param_1 + 0x30);
  iVar5 = (int)*(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x28) * -6;
  iVar4 = iVar5 + *(short *)(param_1 + 0x2c) * -2;
  iVar6 = 0;
  do {
    iVar3 = param_1 + iVar6 * 4;
    bVar8 = iVar6 != 2;
    piVar7 = (int *)(iVar3 + 8);
    bVar9 = iVar6 != 5;
    if (!bVar8 || !bVar9) {
      iVar3 = (int)*(short *)(param_1 + 0x2c);
    }
    if (bVar8 && bVar9) {
      iVar3 = (int)*(short *)(param_1 + 0x28);
    }
    else {
      iVar3 = (iVar3 - (iVar3 >> 0x1f)) * 0x8000;
      iVar5 = iVar3 >> 0x10;
    }
    piVar7 = *(int **)(*(int *)(*piVar7 + 4) + 0x50);
    if (bVar8 && bVar9) {
      iVar5 = (iVar3 - (iVar3 >> 0x1f)) * 0x8000 >> 0x10;
    }
    iVar4 = ((iVar4 * 0x10000 >> 0x10) + iVar5) * 0x10000 >> 0x10;
    piVar7[3] = iVar4 << 0xc;
    piVar7[4] = ((int)sVar2 - (int)sVar1 / 2) * 0x10000 >> 4;
    if (*(byte *)(piVar7 + 9) != (*(byte *)(piVar7 + 9) | 1)) {
      (**(code **)(*piVar7 + 0x18))();
    }
    iVar4 = iVar4 + iVar5;
    iVar6 = iVar6 + 1;
    *(byte *)(piVar7 + 9) = *(byte *)(piVar7 + 9) | 0x31;
  } while (iVar6 < 8);
  return;
}

