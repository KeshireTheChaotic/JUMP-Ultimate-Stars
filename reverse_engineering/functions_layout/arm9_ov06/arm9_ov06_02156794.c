
void FUN_02156794(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(short *)(param_2 + 2) == 0) {
    uVar1 = *(uint *)(param_1 + 0x90) | 0x40000;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90) & 0xfffbffff;
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfff7ffff;
  return;
}

