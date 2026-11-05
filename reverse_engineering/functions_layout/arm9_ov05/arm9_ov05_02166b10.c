
undefined4 FUN_02166b10(undefined4 param_1,int param_2,int param_3,int param_4,undefined2 *param_5)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    if (param_4 == 0) {
      *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
      FUN_02166cc0(param_2);
      return 1;
    }
    return 0;
  }
  if (param_3 == 1) {
    return 1;
  }
  if (param_3 == 2) {
    uVar1 = FUN_0214e084(*param_5);
    *(undefined4 *)(param_2 + 0x18) = uVar1;
    FUN_02166cc0(param_2);
    return 1;
  }
  return 0;
}

