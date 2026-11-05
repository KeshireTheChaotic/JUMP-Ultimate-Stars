
void FUN_02156630(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 2) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x1000000;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x10);
  uVar1 = *(uint *)(iVar2 + 0x78);
  if (*(short *)(param_2 + 2) == 0) {
    uVar1 = uVar1 & 0xfbffffff;
  }
  else {
    uVar1 = uVar1 | 0x4000000;
  }
  *(uint *)(iVar2 + 0x78) = uVar1;
  return;
}

