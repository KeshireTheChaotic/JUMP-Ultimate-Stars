
int FUN_0200ef34(int param_1,int param_2,int param_3,uint param_4,code *param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_38 [20];
  undefined1 *local_24;
  
  local_24 = auStack_38;
  if (param_4 != 0) {
    *(int *)(param_1 + param_4 + -4) = param_2;
    if (7 < param_4) {
      *(int *)(param_1 + param_4 + -8) = param_3;
    }
  }
  if (param_5 != (code *)0x0) {
    iVar1 = param_1 + param_4;
    if (param_6 == 0) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        (*param_5)(iVar1);
        iVar1 = iVar1 + param_3;
      }
    }
    else {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        (*param_5)(iVar1);
        iVar1 = iVar1 + param_3;
      }
    }
  }
  return param_1 + param_4;
}

