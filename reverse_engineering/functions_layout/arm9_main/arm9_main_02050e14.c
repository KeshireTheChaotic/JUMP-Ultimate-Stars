
int FUN_02050e14(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x20;
  if (param_1 >> 0x10 != 0) {
    iVar1 = 0x10;
    param_1 = param_1 >> 0x10;
  }
  if (param_1 >> 8 != 0) {
    iVar1 = iVar1 + -8;
    param_1 = param_1 >> 8;
  }
  if (param_1 >> 4 != 0) {
    iVar1 = iVar1 + -4;
    param_1 = param_1 >> 4;
  }
  if (param_1 >> 2 != 0) {
    iVar1 = iVar1 + -2;
    param_1 = param_1 >> 2;
  }
  if (param_1 >> 1 == 0) {
    iVar1 = iVar1 - param_1;
  }
  else {
    iVar1 = iVar1 + -2;
  }
  return iVar1;
}

