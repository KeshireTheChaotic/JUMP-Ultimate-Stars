
void FUN_02028f68(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[0x1e] + 1U & 3;
  param_1[0x1e] = uVar1;
  param_1[uVar1 + 6] = 0;
  (**(code **)(*param_1 + 0x14))();
  return;
}

