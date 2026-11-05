
void FUN_02170600(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x10) + 0x78);
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xfffcffff;
  }
  else {
    uVar1 = uVar1 | 0x30000;
  }
  *(uint *)(*(int *)(param_1 + 0x10) + 0x78) = uVar1;
  return;
}

