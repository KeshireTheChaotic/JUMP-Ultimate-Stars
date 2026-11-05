
undefined4 FUN_0215a8c0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02159990();
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x80) != 0) {
      return 9;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x100) != 0) {
      return 10;
    }
  }
  return 0;
}

