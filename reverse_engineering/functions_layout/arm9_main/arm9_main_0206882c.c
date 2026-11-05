
int FUN_0206882c(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 3) {
    if ((*(char *)(param_1 + 0xd12) == '\0') && (*(short *)(param_1 + 0xd16) == 0)) {
      if (*(byte *)(param_1 + 0xd0b) >> 4 == 0) {
        param_2 = FUN_02068aa0();
      }
      else {
        param_2 = 6;
      }
    }
    else {
      iVar1 = FUN_02068600(1);
      if (iVar1 == 0) {
        param_2 = FUN_02068740(param_1);
      }
      else {
        param_2 = 4;
      }
    }
  }
  else if (param_2 == 4) {
    param_2 = FUN_02068740();
  }
  else if (param_2 == 5) {
    if (*(byte *)(param_1 + 0xd0b) >> 4 == 0) {
      param_2 = FUN_02068aa0();
    }
    else {
      param_2 = 6;
    }
  }
  FUN_02068bb8(param_2);
  return param_2;
}

