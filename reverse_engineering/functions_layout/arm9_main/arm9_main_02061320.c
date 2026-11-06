
undefined4 FUN_02061320(uint *param_1)

{
  undefined4 uVar1;
  
  if ((param_1[1] & 0x1f) != 0) {
    return 2;
  }
  if ((param_1[2] & 0x1f) != 0) {
    return 2;
  }
  if (param_1[2] == 0) {
    return 2;
  }
  if (param_1[3] < 0x400) {
    return 2;
  }
  if (*param_1 < 6) {
    uVar1 = (*(code *)(*(short *)(*param_1 * 2 + 0x2061386) + 0x2061386))();
    return uVar1;
  }
  return 2;
}

