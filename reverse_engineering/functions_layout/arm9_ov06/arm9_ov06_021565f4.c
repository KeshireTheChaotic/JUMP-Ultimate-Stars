
void FUN_021565f4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(short *)(param_2 + 2) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) | 0x200000;
  }
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x5c);
  uVar1 = *(uint *)(iVar2 + 0x34);
  if (*(short *)(param_2 + 2) == 0) {
    uVar1 = uVar1 & 0xfffffffd;
  }
  else {
    uVar1 = uVar1 | 2;
  }
  *(uint *)(iVar2 + 0x34) = uVar1;
  return;
}

