
undefined4 FUN_0207de08(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0) {
    return 3;
  }
  if (0x20000 < param_3) {
    return 0;
  }
  if (param_2 < 0x4000) {
    return 1;
  }
  if (param_2 < 0x3c001) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

