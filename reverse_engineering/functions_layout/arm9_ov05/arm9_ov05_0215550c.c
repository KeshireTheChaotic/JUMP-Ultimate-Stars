
void FUN_0215550c(int param_1)

{
  undefined4 uVar1;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02152964(&local_14,param_1);
  local_10 = local_14 + -0x4000;
  FUN_02150070(param_1,&local_10);
  FUN_02152964(&local_18,param_1);
  if (local_18 < -0x20000) {
    FUN_0215541c(uVar1);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02155584);
  }
  return;
}

