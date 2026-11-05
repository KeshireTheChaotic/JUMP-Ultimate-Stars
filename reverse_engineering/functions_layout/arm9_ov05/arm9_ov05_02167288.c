
undefined4 FUN_02167288(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    switch(param_4) {
    case 0:
      FUN_02167058(param_2,0);
      break;
    case 1:
      FUN_02166f4c(param_2,1,0,param_4,param_4);
      break;
    case 2:
      param_2[0xb] = 0;
      FUN_02167058(param_2,2);
      break;
    case 3:
      param_2[0xb] = 1;
      FUN_02167058(param_2,2);
      break;
    case 4:
      param_2[0xb] = 2;
      FUN_02167058(param_2);
      break;
    case 5:
      FUN_02166f4c(param_2,0,0,param_4,param_4);
    }
    if (param_4 != 5) {
      param_2[10] = param_4;
    }
  }
  else if ((param_3 == 4) && (*param_2 != 0)) {
    func_0x021bd730(*param_2,param_4,0);
  }
  if (param_2[0xc] != param_2[0xb]) {
    param_2[0xc] = param_2[0xb];
    param_2[0xd] = 0;
  }
  return 1;
}

