
uint FUN_02177480(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1;
  if (param_1 < 5) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 1:
      uVar1 = 9;
      param_2 = -1;
      break;
    case 2:
      uVar1 = 9;
      param_2 = -2;
      break;
    case 3:
      uVar1 = 6;
      param_2 = -10;
      break;
    case 4:
      uVar1 = 6;
      param_2 = -0x14;
    }
  }
  FUN_02177528(uVar1,param_2 + -61000);
  return param_1;
}

