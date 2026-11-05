
undefined4 FUN_0216a604(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  
  iVar5 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
  iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x1a8) + 0x10) + 0x5c);
  uVar6 = 0;
  uStack_20 = param_4;
  iVar1 = FUN_02168f6c();
  iVar7 = 0x1000;
  if (iVar1 == 0) {
    iVar7 = -0x1000;
  }
  local_28 = FUN_0200d12c((*(int *)(iVar4 + 0xc) + iVar7) - *(int *)(iVar3 + 0xc),3);
  local_24 = *(int *)(iVar4 + 0x10) - *(int *)(iVar3 + 0x10);
  if (local_28 < 0) {
    iVar1 = -local_28;
  }
  else {
    iVar1 = local_28;
  }
  if (iVar1 < 0x10) {
    iVar1 = local_24;
    if (local_24 < 0) {
      iVar1 = -local_24;
    }
    if (iVar1 < 0x100) {
      local_28 = *(int *)(iVar4 + 0xc) + iVar7;
      local_24 = *(int *)(iVar4 + 0x10);
      uVar2 = FUN_02168f6c(*(undefined4 *)(iVar5 + 0x1a8));
      FUN_02083950(*(undefined4 *)(param_1 + 8),uVar2);
      goto LAB_0216a79c;
    }
  }
  if (local_28 < 0x801) {
    if (local_28 < -0x800) {
      local_28 = -0x800;
    }
  }
  else {
    local_28 = 0x800;
  }
  if (local_24 < 0x801) {
    if (local_24 < -0x800) {
      local_24 = -0x800;
    }
  }
  else {
    local_24 = 0x800;
  }
  local_28 = local_28 + *(int *)(iVar3 + 0xc);
  local_24 = local_24 + *(int *)(iVar3 + 0x10);
  iVar7 = *(int *)(param_1 + 0x3c) - local_28;
  if (iVar7 < 0) {
    iVar1 = -iVar7;
  }
  else {
    iVar1 = iVar7;
  }
  if (0x100 < iVar1) {
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        FUN_02083950(*(undefined4 *)(param_1 + 8),0);
      }
    }
    else {
      FUN_02083950(*(undefined4 *)(param_1 + 8),1);
    }
    uVar6 = 1;
  }
  *(int *)(param_1 + 0x3c) = local_28;
  iVar7 = *(int *)(param_1 + 0x40) - local_24;
  if (iVar7 < 0) {
    iVar1 = -iVar7;
  }
  else {
    iVar1 = iVar7;
  }
  if (0x100 < iVar1) {
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        uVar6 = 3;
      }
    }
    else {
      uVar6 = 2;
    }
  }
  *(int *)(param_1 + 0x40) = local_24;
LAB_0216a79c:
  FUN_02169e48(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c),&local_28);
  return uVar6;
}

