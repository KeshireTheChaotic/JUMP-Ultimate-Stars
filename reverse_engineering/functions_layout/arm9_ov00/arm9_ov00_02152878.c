
void FUN_02152878(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar1 + 1;
  *(uint *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + (uint)(0xfffffffe < uVar1);
  return;
}

