
undefined4 FUN_021bec1c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(FUN_021d01f4 + param_1 * 4);
  if (iVar1 == 0) {
    if ((0x1ffffff < param_2) && (param_2 + param_3 < 0x22c0001)) {
      return 1;
    }
  }
  else if (iVar1 == 1) {
    if ((0x22bffff < param_2) && (param_2 + param_3 < 0x2300001)) {
      return 1;
    }
    if ((0x1ffffff < param_2) && (param_2 + param_3 < 0x2300001)) {
      return 1;
    }
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    if ((0x27ffdff < param_2) && (param_2 + param_3 < 0x27fff61)) {
      return 1;
    }
  }
  return 0;
}

