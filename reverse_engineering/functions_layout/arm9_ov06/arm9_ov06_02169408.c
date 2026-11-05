
void FUN_02169408(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x34) & 0xfffffffd;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x34) | 2;
  }
  *(uint *)(param_1 + 0x34) = uVar1;
  return;
}

