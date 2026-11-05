
bool FUN_0200c330(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  
  if (param_2 * 2 < 0x200001 && param_2 * -2 != -0x200000) {
    param_2 = 0;
    param_1 = 0;
  }
  if (param_4 * 2 < 0x200001 && param_4 * -2 != -0x200000) {
    param_4 = 0;
    param_3 = 0;
  }
  if ((int)(param_4 | param_2) < 0) {
    bVar1 = param_2 <= param_4;
    if (param_4 == param_2) {
      bVar1 = param_1 <= param_3;
    }
    return !bVar1;
  }
  bVar1 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar1 = param_3 <= param_1;
  }
  return !bVar1;
}

