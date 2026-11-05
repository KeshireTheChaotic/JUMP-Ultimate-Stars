
undefined4 FUN_020784b8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0x56c) + 0x16);
  if (0x3fff < iVar1) {
    return 0;
  }
  iVar1 = iVar1 + param_2;
  if (0x4000 < iVar1) {
    iVar1 = 0x4000;
  }
  *(short *)(*(int *)(param_1 + 0x56c) + 0x16) = (short)iVar1;
  return 1;
}

