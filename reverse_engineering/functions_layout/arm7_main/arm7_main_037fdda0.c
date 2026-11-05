
undefined4 FUN_037fdda0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_3 = param_3 - *(short *)(param_1 + 0x10);
  if ((param_2 - *(int *)(param_1 + 0xc) < 0) ||
     ((param_2 == *(int *)(param_1 + 0xc) && (param_3 < 0)))) {
    return 0;
  }
  if (param_3 < 0) {
    param_3 = param_3 + 0x107;
  }
  if (*(short *)(param_1 + 0x12) < param_3) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

