
void FUN_0215b4a8(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x40);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xefffffff;
  }
  else {
    uVar1 = uVar1 | 0x10000000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x40) = uVar1;
  return;
}

