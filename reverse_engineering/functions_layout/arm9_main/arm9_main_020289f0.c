
void FUN_020289f0(int *param_1)

{
  DAT_020a0cd0 = param_1;
  (**(code **)*param_1)();
  (**(code **)(*param_1 + 0xc))(param_1,0);
  DAT_020a1efc = FUN_02028ac8();
  (**(code **)(*param_1 + 0xc))(param_1,1);
  DAT_020a1f00 = FUN_02028ac8();
  (**(code **)(*param_1 + 0xc))(param_1,2);
  DAT_020a1f04 = FUN_02028ac8();
  (**(code **)(*param_1 + 0xc))(param_1,3);
  DAT_020a1f08 = FUN_02028ac8();
  (**(code **)(*param_1 + 0xc))(param_1,4);
  DAT_020a1f0c = FUN_02028ac8();
  DAT_020a0cc4 = 5;
  return;
}

