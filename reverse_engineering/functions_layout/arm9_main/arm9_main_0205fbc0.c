
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205fbc0(int *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,
                 int *param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 auStack_70 [8];
  uint local_68;
  uint local_64;
  uint uStack_60;
  byte abStack_50 [44];
  
  puVar11 = (uint *)auStack_70;
  bVar1 = *(byte *)(param_1 + 3);
  uVar6 = (uint)*(byte *)(*param_6 + 1);
  uVar8 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 1);
  local_68 = param_3;
  local_64 = param_4;
  if (uVar6 == 0) {
    return;
  }
  if ((int)(param_3 + uVar6) < 0) {
    return;
  }
  iVar5 = param_4 + uVar8;
  if (iVar5 < 0) {
    return;
  }
  if ((int)param_3 < 1) {
    uStack_60 = 0;
  }
  else {
    uStack_60 = param_3 >> 3;
  }
  uVar9 = local_64;
  if ((int)param_4 < 1) {
    uVar9 = 0;
  }
  uVar3 = iVar5 + 7U >> 3;
  uVar10 = param_3 + uVar6 + 7 >> 3;
  if (0 < (int)param_4) {
    uVar9 = uVar9 >> 3;
  }
  if ((uint)param_1[1] <= uVar10) {
    uVar10 = param_1[1];
  }
  if ((uint)param_1[2] <= uVar3) {
    uVar3 = param_1[2];
  }
  iVar5 = uVar10 - uStack_60;
  if (iVar5 < 0) {
    puVar11 = (uint *)(abStack_50 + 0x2c);
  }
  if (iVar5 < 0) {
    return;
  }
  if ((int)(uVar3 - uVar9) < 0) {
    return;
  }
  iVar7 = *param_1;
  if (-1 < (int)puVar11[2]) {
    puVar11[2] = puVar11[2] & 7;
  }
  uVar10 = puVar11[2];
  if (-1 < (int)puVar11[3]) {
    puVar11[3] = puVar11[3] & 7;
  }
  puVar11[5] = puVar11[3] + (uVar3 - uVar9) * -8;
  puVar11[10] = param_6[1];
  puVar11[0x12] = puVar11[0x1c] - 1;
  puVar11[0xe] = uVar8;
  puVar11[0xd] = uVar6;
  uVar6 = (uint)*(byte *)(*(int *)(*param_2 + 8) + 6);
  puVar11[0x10] = uVar6;
  puVar11[0x11] = (uint)*(byte *)(param_1 + 3);
  puVar11[0xf] = uVar6 * **(byte **)(*param_2 + 8);
  puVar11[8] = param_1[4];
  uVar8 = param_1[2];
  uVar6 = puVar11[8];
  bVar2 = *(byte *)((int)puVar11 + 0x21);
  puVar11[7] = param_1[1];
  puVar11[6] = uVar8;
  if ((int)puVar11[3] <= (int)puVar11[5]) {
    return;
  }
  do {
    uVar8 = puVar11[4];
    puVar11[0xc] = puVar11[3];
    for (uVar3 = puVar11[2]; (int)(uVar10 + iVar5 * -8) < (int)uVar3; uVar3 = uVar3 - 8) {
      *puVar11 = (uint)(byte)uVar6;
      puVar11[1] = (uint)bVar2;
      iVar4 = FUN_02060320(uVar8,uVar9,puVar11[7],puVar11[6]);
      puVar11[0xb] = uVar3;
      puVar11[9] = iVar4 * ((int)((uint)bVar1 * 0x40) >> 3) + iVar7;
      FUN_0205ff64(puVar11 + 9);
      uVar8 = uVar8 + 1;
    }
    uVar8 = puVar11[3];
    uVar9 = uVar9 + 1;
    puVar11[3] = uVar8 - 8;
  } while ((int)puVar11[5] < (int)(uVar8 - 8));
  return;
}

