
void FUN_021513b0(int param_1)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_0214e290(&local_10,param_1);
  local_c = local_10 + -0x800;
  FUN_02150f98(param_1,&local_c);
  FUN_0214e290(&local_14,param_1);
  if (local_14 < 1) {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
    FUN_0214e290(&local_1c,param_1);
    local_18 = local_1c + 0x200000;
    FUN_02150f98(param_1,&local_18);
  }
  else {
    FUN_0214e290(&local_20,param_1);
    if (local_20 < 0xc0001) {
      (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
    }
  }
  return;
}

