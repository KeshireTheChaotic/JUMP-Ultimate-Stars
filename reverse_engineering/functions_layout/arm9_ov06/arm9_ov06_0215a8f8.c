
undefined4 FUN_0215a8f8(int param_1)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
    return 0xb;
  }
  iVar1 = FUN_02159990(param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x82) == 0x82) {
      return 7;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x102) == 0x102) {
      return 8;
    }
  }
  return 0;
}

