
bool FUN_02156374(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(*(int *)(param_1 + 0x7c) + 0x10) + 0x78);
  if ((uVar1 & 4) == 0) {
    return (uVar1 & 8) != 0;
  }
  return true;
}

