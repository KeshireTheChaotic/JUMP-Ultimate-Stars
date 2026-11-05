
bool FUN_0200c558(int param_1,int param_2)

{
  if ((uint)(param_1 * 2) < 0x1000001 && param_1 * -2 != -0x1000000) {
    param_1 = 0;
  }
  if ((uint)(param_2 * 2) < 0x1000001 && param_2 * -2 != -0x1000000) {
    param_2 = 0;
  }
  return param_1 != param_2;
}

