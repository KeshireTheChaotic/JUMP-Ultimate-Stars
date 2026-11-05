
void FUN_0205fdc8(int *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,
                 int *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint in_r12;
  int *piVar9;
  int iVar10;
  undefined1 auStack_50 [44];
  
  uVar5 = (uint)*(byte *)(*param_6 + 1);
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) * 0x40) >> 3;
  piVar9 = (int *)auStack_50;
  if (uVar5 == 0) {
    piVar9 = (int *)(auStack_50 + 0x2c);
  }
  iVar10 = *param_1;
  uVar4 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 1);
  if (uVar5 == 0) {
    return;
  }
  if ((int)(param_3 + uVar5) < 0) {
    return;
  }
  iVar2 = param_4 + uVar4;
  if (iVar2 < 0) {
    return;
  }
  if ((int)param_3 < 1) {
    uVar8 = 0;
  }
  else {
    uVar8 = param_3 >> 3;
  }
  if ((int)param_4 < 1) {
    in_r12 = 0;
  }
  uVar6 = param_3 + uVar5 + 7 >> 3;
  if (0 < (int)param_4) {
    in_r12 = param_4 >> 3;
  }
  if ((uint)param_1[1] <= uVar6) {
    uVar6 = param_1[1];
  }
  uVar3 = iVar2 + 7U >> 3;
  if ((uint)param_1[2] <= uVar3) {
    uVar3 = param_1[2];
  }
  iVar2 = uVar6 - uVar8;
  if (iVar2 < 0) {
    piVar9 = (int *)((int)piVar9 + 0x2c);
  }
  if (iVar2 < 0) {
    return;
  }
  if ((int)(uVar3 - in_r12) < 0) {
    return;
  }
  iVar7 = param_1[4];
  if (-1 < (int)param_3) {
    param_3 = param_3 & 7;
  }
  *piVar9 = iVar1 * (iVar7 - iVar2);
  iVar10 = iVar1 * (iVar7 * in_r12 + uVar8) + iVar10;
  if (-1 < (int)param_4) {
    param_4 = param_4 & 7;
  }
  iVar7 = param_4 + (uVar3 - in_r12) * -8;
  piVar9[2] = *(int *)(piVar9[0x15] + 4);
  piVar9[5] = uVar5;
  piVar9[10] = piVar9[0x14] + -1;
  piVar9[6] = uVar4;
  uVar5 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 6);
  piVar9[8] = uVar5;
  piVar9[9] = (uint)*(byte *)(param_1 + 3);
  piVar9[7] = uVar5 * **(byte **)(*param_2 + 8);
  if ((int)param_4 <= iVar7) {
    return;
  }
  do {
    piVar9[4] = param_4;
    for (uVar5 = param_3; (int)(param_3 + iVar2 * -8) < (int)uVar5; uVar5 = uVar5 - 8) {
      piVar9[1] = iVar10;
      piVar9[3] = uVar5;
      FUN_0205ff64(piVar9 + 1);
      iVar10 = iVar10 + iVar1;
    }
    param_4 = param_4 - 8;
    iVar10 = iVar10 + *piVar9;
  } while (iVar7 < (int)param_4);
  return;
}

