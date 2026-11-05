
void FUN_0200eff0(int param_1,int param_2,int param_3,code *param_4,int param_5)

{
  undefined1 auStack_38 [20];
  undefined1 *local_24;
  code *pcStack_20;
  
  local_24 = auStack_38;
  if (param_4 == (code *)0x0) {
    return;
  }
  pcStack_20 = param_4;
  if (param_5 == 0) {
    if (param_2 == 0) {
      return;
    }
    do {
      (*param_4)(param_1);
      param_1 = param_1 + param_3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  do {
    (*param_4)(param_1);
    param_1 = param_1 + param_3;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

