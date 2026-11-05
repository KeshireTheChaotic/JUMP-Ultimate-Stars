
undefined4 FUN_03800110(byte *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 < 0xe) {
    uVar1 = 0;
  }
  else if (*param_1 < 0x10) {
    param_1[1] = 2;
    param_1[0x3c] = 0x46;
    param_1[0x3d] = 0x1f;
    FUN_037ff9ac();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

