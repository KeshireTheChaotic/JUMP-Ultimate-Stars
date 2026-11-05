
undefined4 FUN_0215a824(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215a864(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 == 1) {
    if ((*(uint *)(param_1 + 0x6c) & 4) != 0) {
      return 1;
    }
  }
  else if ((*(uint *)(param_1 + 0x6c) & 8) != 0) {
    return 1;
  }
  return 0;
}

