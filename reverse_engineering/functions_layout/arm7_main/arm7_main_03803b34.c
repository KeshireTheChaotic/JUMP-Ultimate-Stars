
void FUN_03803b34(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 + param_2 != 0) {
    if (param_1 != 0) {
      FUN_037fc1cc();
    }
    if (param_2 != 0) {
      for (param_2 = param_2 - param_1; (iVar1 = FUN_03803ac8(), iVar1 == 0 && (0 < param_2));
          param_2 = param_2 - iVar1) {
        iVar1 = param_2;
        if (4 < param_2) {
          iVar1 = 5;
        }
        FUN_037fc1cc(iVar1);
      }
    }
    iVar1 = FUN_03803ac8();
    if (iVar1 == 0) {
      *DAT_03809c80 = 4;
    }
  }
  return;
}

