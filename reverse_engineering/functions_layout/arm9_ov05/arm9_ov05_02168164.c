
void FUN_02168164(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  FUN_02152950(&local_18,*(undefined4 *)(iVar1 + 0x18));
  local_14 = local_18 + 0x18000;
  FUN_02150a10(*(undefined4 *)(iVar1 + 0x18),&local_14);
  FUN_02152950(&local_1c,*(undefined4 *)(iVar1 + 0x18));
  if (0 < local_1c) {
    local_20 = 0;
    FUN_02150a10(*(undefined4 *)(iVar1 + 0x18),&local_20);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021681ec);
  }
  FUN_021681ec(param_1);
  return;
}

