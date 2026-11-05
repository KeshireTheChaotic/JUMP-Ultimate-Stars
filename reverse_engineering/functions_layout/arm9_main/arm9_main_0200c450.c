
bool FUN_0200c450(uint param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1 * 2 < 0x1000001 && param_1 * -2 != -0x1000000) {
    param_1 = 0;
  }
  if (param_2 * 2 < 0x1000001 && param_2 * -2 != -0x1000000) {
    param_2 = 0;
  }
  uVar1 = param_1;
  if ((int)(param_1 | param_2) < 0) {
    uVar1 = param_2;
    param_2 = param_1;
  }
  return param_2 <= uVar1;
}

