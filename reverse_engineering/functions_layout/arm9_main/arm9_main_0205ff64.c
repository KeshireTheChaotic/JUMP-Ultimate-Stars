
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205ff64(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int local_58;
  uint *local_4c;
  uint *local_44;
  int iStack_34;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  int iStack_2c;
  undefined1 uStack_28;
  undefined1 uStack_27;
  
  iVar7 = param_1[2];
  iVar5 = param_1[3];
  if (iVar7 < 0) {
    local_58 = 0;
  }
  else {
    local_58 = iVar7;
  }
  iVar13 = iVar7 + param_1[4];
  iVar2 = iVar5;
  if (iVar5 < 0) {
    iVar2 = 0;
  }
  iVar4 = iVar5 + param_1[5];
  if (7 < iVar13) {
    iVar13 = 8;
  }
  if (7 < iVar4) {
    iVar4 = 8;
  }
  if (0 < iVar5) {
    iVar5 = 0;
  }
  iVar10 = param_1[8];
  if (0 < iVar7) {
    iVar7 = 0;
  }
  iVar9 = param_1[7];
  iVar6 = param_1[6];
  uVar14 = -iVar5 * iVar6 + iVar9 * -iVar7;
  iVar5 = param_1[1];
  if (iVar10 == 4) {
    iVar7 = param_1[9];
    local_4c = (uint *)(*param_1 + iVar2 * 4);
    puVar1 = (uint *)(*param_1 + iVar4 * 4);
    if (puVar1 <= local_4c) {
      return;
    }
    do {
      iVar2 = (int)uVar14 >> 0x1f;
      uVar8 = *local_4c;
      iStack_34 = iVar5 + (uVar14 >> 3);
      uStack_30 = 0;
      uStack_2f = uStack_30;
      FUN_02060968(&iStack_34,(uVar14 * 0x20000000 + iVar2 >> 0x1d | iVar2 << 3) - iVar2);
      for (uVar11 = local_58 * iVar10; uVar11 < (uint)(iVar13 * iVar10); uVar11 = uVar11 + 4) {
        iVar2 = FUN_02060968(&iStack_34,iVar9);
        if (iVar2 != 0) {
          uVar8 = uVar8 & ~(0xf << (uVar11 & 0xff)) | iVar7 + iVar2 << (uVar11 & 0xff);
        }
      }
      puVar3 = local_4c + 1;
      *local_4c = uVar8;
      uVar14 = uVar14 + iVar6;
      local_4c = puVar3;
    } while (puVar3 < puVar1);
    return;
  }
  iVar7 = param_1[9];
  local_44 = (uint *)(*param_1 + iVar2 * 8);
  puVar1 = (uint *)(*param_1 + iVar4 * 8);
  if (puVar1 <= local_44) {
    return;
  }
  do {
    iVar2 = (int)uVar14 >> 0x1f;
    uVar12 = *local_44;
    uVar11 = local_44[1];
    iStack_2c = iVar5 + (uVar14 >> 3);
    uStack_28 = 0;
    uStack_27 = uStack_28;
    FUN_02060968(&iStack_2c,(uVar14 * 0x20000000 + iVar2 >> 0x1d | iVar2 << 3) - iVar2);
    for (uVar8 = local_58 * iVar10; uVar8 < (uint)(iVar13 * iVar10); uVar8 = uVar8 + 8) {
      iVar2 = FUN_02060968(&iStack_2c,iVar9);
      if (iVar2 != 0) {
        if (uVar8 < 0x20) {
          uVar12 = uVar12 & ~(0xff << (uVar8 & 0xff)) | iVar7 + iVar2 << (uVar8 & 0xff);
        }
        else {
          uVar11 = uVar11 & ~(0xff << (uVar8 - 0x20 & 0xff)) |
                   iVar7 + iVar2 << (uVar8 - 0x20 & 0xff);
        }
      }
    }
    *local_44 = uVar12;
    puVar3 = local_44 + 2;
    local_44[1] = uVar11;
    uVar14 = uVar14 + iVar6;
    local_44 = puVar3;
  } while (puVar3 < puVar1);
  return;
}

