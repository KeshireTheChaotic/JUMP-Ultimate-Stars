
undefined4 * FUN_0201a274(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (int)param_1 + 0x3bU & 0xffffffe0;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = FUN_0201a758(uVar1,(param_2 - ((uVar1 - 4) - (int)param_1)) + -4);
    }
    *param_1 = uVar2;
  }
  return param_1;
}

