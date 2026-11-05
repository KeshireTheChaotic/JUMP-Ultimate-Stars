
void FUN_021b65e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  uVar1 = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0xf8) <= uVar1) {
      local_20 = param_2;
      local_1c = param_3;
      uStack_18 = param_4;
      FUN_021b6628(param_1 + 0xf4,&local_20);
      return;
    }
    if (param_2 == *(int *)(*(int *)(param_1 + 0xf4) + uVar1 * 8)) break;
    uVar1 = uVar1 + 1;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xf4) + uVar1 * 8 + 4) = param_3;
  return;
}

