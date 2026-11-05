
void FUN_02062db4(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0x3f) == 0x11) {
    if (DAT_020af500 == 0) {
      iVar1 = 1;
      DAT_020af500 = 1;
      if (DAT_020af504 != (code *)0x0) {
        iVar1 = (*DAT_020af504)();
      }
      if (iVar1 != 0) {
        FUN_02062d44();
        return;
      }
    }
  }
  else {
    FUN_02055684();
  }
  return;
}

