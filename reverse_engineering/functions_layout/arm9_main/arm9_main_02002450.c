
void FUN_02002450(undefined1 *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 < param_1) {
    param_2 = param_2 + param_3;
    param_1 = param_1 + param_3;
    for (; param_3 != 0; param_3 = param_3 + -1) {
      param_2 = param_2 + -1;
      param_1 = param_1 + -1;
      *param_1 = *param_2;
    }
  }
  else if (param_3 != 0) {
    do {
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      *param_1 = uVar1;
      param_1 = param_1 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    return;
  }
  return;
}

