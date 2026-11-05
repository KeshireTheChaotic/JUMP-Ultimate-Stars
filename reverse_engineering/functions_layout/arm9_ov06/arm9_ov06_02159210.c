
void FUN_02159210(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x40);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfdffffff;
  }
  else {
    uVar1 = uVar1 | 0x2000000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x40) = uVar1;
  return;
}

