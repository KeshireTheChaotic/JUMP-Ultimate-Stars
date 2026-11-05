
undefined4 FUN_021673e0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  if (param_3 == 0) {
    if (param_4 == 2) {
      param_2[0xe] = 2;
      FUN_02167058(param_2,6,0,2,2);
    }
    else if (param_4 == 3) {
      param_2[0xe] = 3;
      FUN_02166f4c(param_2,3);
    }
    else if (param_4 == 0xb) {
      param_2[0xe] = 0;
      FUN_02167058(param_2,1,0,0xb,0xb);
    }
  }
  else if ((param_3 == 1) && (*param_2 != 0)) {
    func_0x021bd730(*param_2,param_4,0);
  }
  return 1;
}

