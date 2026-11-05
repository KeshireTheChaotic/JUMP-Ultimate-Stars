
undefined4 FUN_021b3f54(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x7c) <= uVar1) {
      return 0;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 0x78) + uVar1 * 8)) break;
    uVar1 = uVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x78) + uVar1 * 8 + 4);
}

