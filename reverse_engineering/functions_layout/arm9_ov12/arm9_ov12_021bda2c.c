
void FUN_021bda2c(int param_1)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_021bda7c(&local_10,param_1);
  local_c = local_10 + 0x15000;
  FUN_021b956c(param_1,&local_c);
  FUN_021bda7c(&local_14,param_1);
  if (0xa000 < local_14) {
    local_18 = 0xa000;
    FUN_021b956c(param_1,&local_18);
    FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_021bda91);
  }
  return;
}

