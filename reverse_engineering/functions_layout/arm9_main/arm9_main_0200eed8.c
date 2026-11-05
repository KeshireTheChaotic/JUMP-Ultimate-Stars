
void FUN_0200eed8(uint param_1,uint param_2,int param_3,code *param_4)

{
  undefined1 auStack_30 [20];
  undefined1 *local_1c;
  
  local_1c = auStack_30;
  if (param_2 <= param_1) {
    return;
  }
  do {
    param_2 = param_2 - param_3;
    (*param_4)(param_2);
  } while (param_1 < param_2);
  return;
}

