
bool FUN_0215cdf8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0215ceb0(&local_18,param_1);
  local_14 = local_18 + 0x15000;
  FUN_0215ce90(param_1,&local_14);
  FUN_0215ceb0(&local_1c,param_1);
  if (0 < local_1c) {
    local_20 = 0;
    FUN_0215ce90(param_1,&local_20);
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_0215d294);
    FUN_0215cf58(uVar1,param_2);
  }
  return 0 < local_1c;
}

