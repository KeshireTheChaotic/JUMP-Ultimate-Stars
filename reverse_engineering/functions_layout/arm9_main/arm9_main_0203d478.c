
void FUN_0203d478(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x237] = param_2;
  if ((param_2 == 8) && (param_1[0x239] != 2)) {
    param_1[0x254] = param_1[0x231];
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if ((iVar1 != 0) && (param_1[0x231] == 1)) {
      param_1[0x254] = 3;
    }
  }
  else {
    param_1[0x254] = -1;
  }
  (**(code **)(*param_1 + 0x88))();
  return;
}

