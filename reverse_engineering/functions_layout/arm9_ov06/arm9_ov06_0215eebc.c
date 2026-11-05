
void FUN_0215eebc(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x78);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffdfffff;
  }
  else {
    uVar1 = uVar1 | 0x200000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x78) = uVar1;
  return;
}

