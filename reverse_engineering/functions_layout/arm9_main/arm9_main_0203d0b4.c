
void FUN_0203d0b4(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x239] = param_2;
  if ((param_1[0x237] == 8) && (param_1[0x239] != 2)) {
    param_1[0x254] = param_1[0x231];
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if ((iVar1 != 0) && (param_1[0x231] == 1)) {
      param_1[0x254] = 3;
    }
  }
  else {
    param_1[0x254] = -1;
  }
  switch(param_1[0x239]) {
  case 0:
    param_1[0x250] = 0;
    break;
  case 1:
    param_1[0x250] = 2;
    break;
  case 2:
    param_1[0x250] = 1;
    break;
  case 3:
    param_1[0x250] = 2;
    break;
  case 4:
    param_1[0x250] = 0;
    break;
  case 5:
    param_1[0x250] = 0;
    break;
  case 6:
    param_1[0x250] = 0;
  }
  (**(code **)(*param_1 + 0x8c))();
  (**(code **)(*param_1 + 0x88))();
  return;
}

