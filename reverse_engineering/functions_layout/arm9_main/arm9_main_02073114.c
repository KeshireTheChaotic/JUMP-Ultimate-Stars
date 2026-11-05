
void FUN_02073114(uint param_1,int param_2)

{
  if (param_1 < DAT_020b02b4) {
    DAT_020b02b4 = param_1;
  }
  if (DAT_020b02b0 < param_1 + param_2) {
    DAT_020b02b0 = (param_1 + param_2) - 1;
  }
  return;
}

