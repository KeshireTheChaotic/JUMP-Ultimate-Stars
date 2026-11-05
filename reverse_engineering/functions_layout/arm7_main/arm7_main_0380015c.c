
undefined4 FUN_0380015c(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*param_1 < 8) {
    uVar1 = 0;
  }
  else if (*param_1 < 0xe) {
    param_1[1] = 1;
    *(undefined4 *)(param_1 + 0x44) = param_2;
    param_1[0x3c] = 0x46;
    param_1[0x3d] = 0x1f;
    FUN_037ff9ac(param_1,param_3);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

