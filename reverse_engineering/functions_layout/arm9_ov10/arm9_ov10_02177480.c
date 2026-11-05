
int FUN_02177480(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = param_1;
  switch(param_1) {
  case 1:
    iVar1 = 9;
    param_2 = -1;
    break;
  case 2:
    iVar1 = 9;
    param_2 = -2;
    break;
  case 3:
    iVar1 = 6;
    param_2 = -10;
    break;
  case 4:
    iVar1 = 6;
    param_2 = -0x14;
  }
  FUN_02177528(iVar1,param_2 + -61000);
  return param_1;
}

