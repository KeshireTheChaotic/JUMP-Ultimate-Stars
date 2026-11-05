
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_021c167c(int param_1)

{
  short sVar1;
  bool bVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  int unaff_r7;
  int local_c8;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_7c;
  int local_78;
  int local_6c;
  undefined2 local_24;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  short local_18;
  short local_16;
  
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0x200;
  *(undefined2 *)(param_1 + 0x2e) = 0x200;
  *(undefined2 *)(param_1 + 0x30) = 0xfe00;
  *(undefined2 *)(param_1 + 0x32) = 0xfe00;
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  psVar6 = *(short **)(param_1 + 4);
  if ((uVar5 < 2) || (psVar6[2] == -1)) {
    local_18 = *psVar6;
    local_16 = psVar6[1];
  }
  else {
    local_18 = *psVar6 * 2 - psVar6[2];
    local_16 = psVar6[1] * 2 - psVar6[3];
  }
  bVar2 = true;
  local_c8 = 0;
  if (uVar5 != 0) {
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0;
    local_78 = 0;
    local_6c = 1;
    do {
      sVar1 = *psVar6;
      iVar8 = (int)sVar1;
      if (iVar8 == -1) {
        if (unaff_r7 == 0) {
          unaff_r7 = local_6c;
        }
        *(int *)(*(int *)(param_1 + 0x1c) + local_a0) = unaff_r7;
        *(int *)(*(int *)(param_1 + 0xc) + local_a0) = local_c0;
        if (local_c8 + 1 < (int)uVar5) {
          iVar8 = (int)local_16 - (int)psVar6[3];
          iVar7 = (int)local_18 - (int)psVar6[2];
          local_bc = FUN_02050904((iVar7 * iVar7 + iVar8 * iVar8) * 0x1000);
          if (local_bc == 0) {
            local_bc = 1;
          }
          local_24 = FUN_02050bac((int)psVar6[3] - (int)local_16,(int)psVar6[2] - (int)local_18);
        }
        else {
          local_bc = 0;
          if (((local_c8 < 2) || (psVar6[-4] != -1)) || (psVar6[-2] != -1)) {
            local_24 = 0;
          }
          else {
            local_24 = FUN_02050bac((int)psVar6[-1] - (int)psVar6[-3],0);
          }
        }
        iVar8 = *(int *)(param_1 + 0x28) + local_9c;
        *(short *)(*(int *)(param_1 + 0x28) + local_9c) = local_20;
        *(short *)(iVar8 + 2) = local_1e;
        *(short *)(iVar8 + 4) = local_1c;
        *(short *)(iVar8 + 6) = local_1a;
        if (local_20 < *(short *)(param_1 + 0x2c)) {
          *(short *)(param_1 + 0x2c) = local_20;
        }
        if (*(short *)(param_1 + 0x30) < local_1c) {
          *(short *)(param_1 + 0x30) = local_1c;
        }
        if (local_1e < *(short *)(param_1 + 0x2e)) {
          *(short *)(param_1 + 0x2e) = local_1e;
        }
        if (*(short *)(param_1 + 0x32) < local_1a) {
          *(short *)(param_1 + 0x32) = local_1a;
        }
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + unaff_r7;
        local_a0 = local_a0 + 4;
        local_9c = local_9c + 8;
        bVar2 = true;
      }
      else {
        if (bVar2) {
          *(int *)(*(int *)(param_1 + 8) + local_a0) = local_c8;
          local_c0 = 0;
          local_20 = *psVar6;
          local_1e = psVar6[1];
          local_bc = 0;
          local_24 = FUN_02050bac((int)local_1e - (int)local_16,(int)local_20 - (int)local_18);
          unaff_r7 = local_78;
          local_1c = local_20;
          local_1a = local_1e;
        }
        else {
          if (iVar8 < local_20) {
            local_20 = sVar1;
          }
          if (local_1c < iVar8) {
            local_1c = sVar1;
          }
          sVar1 = psVar6[1];
          iVar7 = (int)sVar1;
          if (iVar7 < local_1e) {
            local_1e = sVar1;
          }
          if (local_1a < iVar7) {
            local_1a = sVar1;
          }
          iVar7 = local_16 - iVar7;
          iVar8 = local_18 - iVar8;
          local_bc = FUN_02050904((iVar8 * iVar8 + iVar7 * iVar7) * 0x1000);
          if (local_bc == 0) {
            local_bc = 1;
          }
          local_24 = FUN_02050bac((int)psVar6[1] - (int)local_16,(int)*psVar6 - (int)local_18);
        }
        unaff_r7 = unaff_r7 + local_bc;
        local_c0 = local_c0 + 1;
        local_18 = *psVar6;
        local_16 = psVar6[1];
        bVar2 = false;
      }
      *(int *)(*(int *)(param_1 + 0x10) + local_98) = local_bc;
      *(undefined2 *)(*(int *)(param_1 + 0x18) + local_94) = local_24;
      psVar6 = psVar6 + 2;
      local_98 = local_98 + 4;
      local_94 = local_94 + 2;
      local_c8 = local_c8 + 1;
    } while (local_c8 < (int)uVar5);
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
  }
  local_b4 = 0;
  local_b8 = 0;
  sVar1 = 0;
  bVar2 = true;
  psVar6 = *(short **)(param_1 + 4);
  local_7c = 0;
  if (uVar5 != 0) {
    iVar7 = 0;
    local_a8 = 0;
    local_a4 = 0;
    iVar8 = iVar7;
    sVar4 = 0;
    do {
      local_b8 = local_b8 + *(int *)(*(int *)(param_1 + 0x10) + iVar8);
      sVar3 = FUN_02050970(local_b8,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
      *(short *)(*(int *)(param_1 + 0x14) + local_a8) = sVar3 - sVar4;
      if (*psVar6 == -1) {
        iVar7 = iVar7 + 4;
        local_a4 = local_a4 + 2;
        bVar2 = true;
      }
      else if (bVar2) {
        local_b4 = local_b4 + *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
        sVar4 = FUN_02050970(local_b4,*(undefined4 *)(param_1 + 0x24));
        *(short *)(*(int *)(param_1 + 0x20) + local_a4) = sVar4 - sVar1;
        bVar2 = false;
        sVar1 = sVar4;
      }
      iVar8 = iVar8 + 4;
      local_a8 = local_a8 + 2;
      local_7c = local_7c + 1;
      psVar6 = psVar6 + 2;
      sVar4 = sVar3;
    } while (local_7c < (int)uVar5);
  }
  return;
}

