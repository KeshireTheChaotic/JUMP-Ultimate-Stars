
void FUN_021640c0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 byte param_6)

{
  int iVar1;
  int local_28 [3];
  int iStack_1c;
  
  iStack_1c = param_4;
  iVar1 = FUN_02163f64();
  FUN_021634b4(local_28,param_5);
  local_28[0] = local_28[0] + ((int)((iVar1 + -1) * (uint)param_6) / 2) * 0x1000;
  iVar1 = param_4 - iVar1;
  while (param_4 = param_4 + -1, iVar1 <= param_4) {
    FUN_021639a8(*(undefined4 *)(param_2 + param_4 * 4),local_28);
    local_28[0] = local_28[0] + (uint)param_6 * -0x1000;
  }
  return;
}

