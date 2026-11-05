
undefined4 FUN_02159a74(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x154) + param_2 * 4);
  }
  return uVar1;
}

