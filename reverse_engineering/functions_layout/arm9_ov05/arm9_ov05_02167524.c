
undefined4 FUN_02167524(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  switch(param_3) {
  case 0:
    if (param_4 == 0) {
      FUN_02167058(param_2,3);
    }
    break;
  case 1:
    break;
  case 2:
    if (param_2[0xb] == 0) {
      FUN_02167058(param_2,4);
    }
    else if (param_2[0xb] == 2) {
      FUN_02166f4c(param_2,2);
    }
    param_2[0xd] = param_4;
    break;
  case 3:
    if (*param_2 != 0) {
      func_0x021bd730(*param_2,param_4,0,param_4,param_4);
    }
    break;
  case 4:
    iVar2 = 0;
    do {
      iVar1 = FUN_02169674(param_1,param_4,iVar2);
      if (*param_2 != 0 && iVar1 != 0) {
        func_0x021bd7c0(*param_2,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
  }
  return 1;
}

