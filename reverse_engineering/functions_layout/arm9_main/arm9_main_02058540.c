
void FUN_02058540(undefined4 *param_1,ushort *param_2)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  byte abStack_98 [4];
  byte abStack_94 [4];
  undefined4 auStack_90 [32];
  
  pbVar10 = abStack_98;
  pbVar11 = abStack_98;
  pbVar13 = abStack_98;
  pbVar9 = abStack_98;
  if (param_2[0x1e] != 0) {
    abStack_98[0] = 0;
    iVar8 = 8;
    do {
      uVar3 = *(undefined4 *)pbVar10;
      uVar5 = *(undefined4 *)((int)pbVar10 + 4);
      uVar6 = *(undefined4 *)((int)pbVar10 + 8);
      uVar7 = *(undefined4 *)((int)pbVar10 + 0xc);
      pbVar10 = (byte *)((int)pbVar10 + 0x10);
      *param_1 = uVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1 = param_1 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *param_1 = *(undefined4 *)pbVar10;
    return;
  }
  abStack_98[0] = (byte)param_2[0x1f];
  if (abStack_98[0] == 0) {
    iVar8 = 8;
    do {
      uVar3 = *(undefined4 *)pbVar11;
      uVar5 = *(undefined4 *)((int)pbVar11 + 4);
      uVar6 = *(undefined4 *)((int)pbVar11 + 8);
      uVar7 = *(undefined4 *)((int)pbVar11 + 0xc);
      pbVar11 = (byte *)((int)pbVar11 + 0x10);
      *param_1 = uVar3;
      param_1[1] = uVar5;
      param_1[2] = uVar6;
      param_1[3] = uVar7;
      param_1 = param_1 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *param_1 = *(undefined4 *)pbVar11;
    return;
  }
  if (0x10 < abStack_98[0]) {
    abStack_98[0] = 0x10;
  }
  uVar2 = *param_2;
  uVar4 = 0;
  param_2 = param_2 + 0x20;
  iVar8 = 0;
  if (abStack_98[0] != 0) {
    do {
      iVar1 = iVar8 * 8;
      abStack_98[iVar1 + 4] = (byte)*param_2;
      abStack_98[iVar1 + 5] = *(byte *)((int)param_2 + 1);
      auStack_90[iVar8 * 2] = param_2 + 1;
      uVar12 = abStack_98[iVar1 + 5] + 2 & 0xff;
      uVar4 = uVar4 + uVar12 & 0xff;
      if (((uint)uVar2 * 2 - 0x40 & 0xff) < uVar4) {
        abStack_98[0] = 0;
        iVar8 = 8;
        do {
          uVar3 = *(undefined4 *)pbVar13;
          uVar5 = *(undefined4 *)((int)pbVar13 + 4);
          uVar6 = *(undefined4 *)((int)pbVar13 + 8);
          uVar7 = *(undefined4 *)((int)pbVar13 + 0xc);
          pbVar13 = (byte *)((int)pbVar13 + 0x10);
          *param_1 = uVar3;
          param_1[1] = uVar5;
          param_1[2] = uVar6;
          param_1[3] = uVar7;
          param_1 = param_1 + 4;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        *param_1 = *(undefined4 *)pbVar13;
        return;
      }
      iVar8 = iVar8 + 1;
      param_2 = (ushort *)((int)param_2 + uVar12);
    } while (iVar8 < (int)(uint)abStack_98[0]);
  }
  iVar8 = 8;
  do {
    uVar3 = *(undefined4 *)pbVar9;
    uVar5 = *(undefined4 *)((int)pbVar9 + 4);
    uVar6 = *(undefined4 *)((int)pbVar9 + 8);
    uVar7 = *(undefined4 *)((int)pbVar9 + 0xc);
    pbVar9 = (byte *)((int)pbVar9 + 0x10);
    *param_1 = uVar3;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1 = param_1 + 4;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *param_1 = *(undefined4 *)pbVar9;
  return;
}

