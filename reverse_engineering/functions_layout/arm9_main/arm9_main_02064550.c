
undefined4 FUN_02064550(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x34) = param_3;
  iVar1 = FUN_02063fe8(param_1,6);
  if (iVar1 == 0) {
    return 0;
  }
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xffffffdf;
  return 1;
}

