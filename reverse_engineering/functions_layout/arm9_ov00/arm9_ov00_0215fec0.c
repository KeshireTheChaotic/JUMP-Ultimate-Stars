
void FUN_0215fec0(int param_1)

{
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_0214e290(&local_10,param_1);
  local_c = local_10 + -0x800;
  FUN_02150f98(param_1,&local_c);
  FUN_0214e290(&local_14,param_1);
  if ((local_14 < -0xfffff) || (FUN_0214e290(&local_18,param_1), 0xbffff < local_18)) {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  }
  else {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  }
  return;
}

