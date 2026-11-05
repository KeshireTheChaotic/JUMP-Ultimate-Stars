
void FUN_02063094(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 & 0x3f) == 0x11) {
    if (DAT_020af51c == 0) {
      iVar1 = 0;
      if (DAT_020af520 != (code *)0x0) {
        iVar1 = (*DAT_020af520)();
      }
      if (iVar1 != 0) {
        FUN_02063080();
      }
      DAT_020af51c = 1;
      return;
    }
  }
  else {
    FUN_02055684();
  }
  return;
}

