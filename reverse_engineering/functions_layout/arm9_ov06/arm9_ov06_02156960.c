
void FUN_02156960(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    return;
  }
  uVar1 = 0;
  if (*(short *)(param_2 + 2) != 0) {
    uVar1 = *(uint *)(param_1 + 0x90) | 0x400000;
    *(uint *)(param_1 + 0x90) = uVar1;
  }
  if (*(short *)(param_2 + 2) == 0) {
    FUN_0207cec8(*(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x10),0x20000000,uVar1,param_4,param_4);
    return;
  }
  FUN_0207ce7c();
  return;
}

