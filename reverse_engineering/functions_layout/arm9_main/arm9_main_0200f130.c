
void FUN_0200f130(int param_1,int param_2,int param_3,code *param_4)

{
  int unaff_r4;
  undefined1 auStack_30 [20];
  undefined1 *local_1c;
  
  if (param_4 != (code *)0x0) {
    unaff_r4 = param_2 * param_3 + param_1;
    local_1c = auStack_30;
  }
  if (param_4 != (code *)0x0 && param_2 != 0) {
    do {
      unaff_r4 = unaff_r4 - param_3;
      (*param_4)(unaff_r4);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}

