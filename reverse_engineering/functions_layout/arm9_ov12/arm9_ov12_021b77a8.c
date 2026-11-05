
void FUN_021b77a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0xc4) <= uVar1) {
      local_c = param_2;
      uStack_8 = param_3;
      uStack_4 = param_4;
      FUN_021ae4c0(param_1 + 0xc0,&local_c,*(uint *)(param_1 + 0xc4),uVar1,param_4);
      return;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 0xc0) + uVar1 * 4)) break;
    uVar1 = uVar1 + 1;
  }
  return;
}

