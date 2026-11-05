
undefined4 FUN_02169cb0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_20;
  int local_1c;
  
  iVar6 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c);
  iVar5 = *(int *)(*(int *)(*(int *)(iVar6 + 0x1a8) + 0x10) + 0x5c);
  uVar7 = 0;
  iVar1 = FUN_02168f6c();
  iVar3 = 0x2000;
  if (iVar1 == 0) {
    iVar3 = -0x2000;
  }
  iVar1 = (*(int *)(iVar5 + 0xc) + iVar3) - *(int *)(iVar4 + 0xc);
  local_20 = (int)(iVar1 + ((uint)(iVar1 >> 1) >> 0x1e)) >> 2;
  iVar1 = (*(int *)(iVar5 + 0x10) + -0x1000) - *(int *)(iVar4 + 0x10);
  local_1c = (int)(iVar1 + ((uint)(iVar1 >> 1) >> 0x1e)) >> 2;
  if (local_20 < 0) {
    iVar1 = -local_20;
  }
  else {
    iVar1 = local_20;
  }
  if (iVar1 < 0x20) {
    iVar1 = local_1c;
    if (local_1c < 0) {
      iVar1 = -local_1c;
    }
    if (iVar1 < 0x20) {
      local_20 = *(int *)(iVar5 + 0xc) + iVar3;
      local_1c = *(int *)(iVar5 + 0x10) + -0x1000;
      uVar2 = FUN_02168f6c(*(undefined4 *)(iVar6 + 0x1a8));
      FUN_02083950(*(undefined4 *)(param_1 + 8),uVar2);
      goto LAB_02169e28;
    }
  }
  if (local_20 < 0x401) {
    if (local_20 < -0x400) {
      local_20 = -0x400;
    }
  }
  else {
    local_20 = 0x400;
  }
  if (local_1c < 0x401) {
    if (local_1c < -0x400) {
      local_1c = -0x400;
    }
  }
  else {
    local_1c = 0x400;
  }
  local_20 = local_20 + *(int *)(iVar4 + 0xc);
  local_1c = local_1c + *(int *)(iVar4 + 0x10);
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar3 = iVar1 - local_20;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (0x100 < iVar3) {
    if (local_20 < iVar1) {
      FUN_02083950(*(undefined4 *)(param_1 + 8),1);
    }
    else if (iVar1 < local_20) {
      FUN_02083950(*(undefined4 *)(param_1 + 8),0);
    }
    *(int *)(param_1 + 0x3c) = local_20;
  }
  uVar7 = 1;
LAB_02169e28:
  FUN_02169e48(*(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c),&local_20);
  return uVar7;
}

