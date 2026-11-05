
void FUN_0215676c(int param_1,int param_2)

{
  uint uVar1;
  
  if (*(short *)(param_2 + 2) == 0) {
    uVar1 = *(uint *)(param_1 + 0x90) | 0x10000;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x90) & 0xfffeffff;
  }
  *(uint *)(param_1 + 0x90) = uVar1;
  *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffdffff;
  return;
}

