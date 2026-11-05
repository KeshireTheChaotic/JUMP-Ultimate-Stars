
undefined4 FUN_020644ec(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02063fe8(param_1,8);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xe;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffcf;
  return 1;
}

