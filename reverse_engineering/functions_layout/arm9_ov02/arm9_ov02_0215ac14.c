
void FUN_0215ac14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  FUN_0214f990(&local_18,*(undefined4 *)(iVar1 + 0x2c));
  local_14 = local_18 + 0x20000;
  FUN_0214ef60(*(undefined4 *)(iVar1 + 0x2c),&local_14);
  FUN_0214f990(&local_1c,*(undefined4 *)(iVar1 + 0x2c));
  if (0 < local_1c) {
    local_20 = 0;
    FUN_0214ef60(*(undefined4 *)(iVar1 + 0x2c),&local_20);
    func_0x021b65cc();
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 4));
    FUN_02028384(*(undefined4 *)(*(int *)(iVar1 + 4) + 4),FUN_0215acb0);
  }
  FUN_0215acb0(param_1);
  return;
}

