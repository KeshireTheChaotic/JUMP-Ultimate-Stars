
bool FUN_0200c3f0(int param_1,uint param_2,int param_3,uint param_4)

{
  if (param_2 * 2 < 0x200001 && param_2 * -2 != -0x200000) {
    param_2 = 0;
    param_1 = 0;
  }
  if (param_4 * 2 < 0x200001 && param_4 * -2 != -0x200000) {
    param_4 = 0;
    param_3 = 0;
  }
  if ((int)(param_4 | param_2) < 0) {
    return param_4 != param_2 || param_3 != param_1;
  }
  return param_2 != param_4 || param_1 != param_3;
}

