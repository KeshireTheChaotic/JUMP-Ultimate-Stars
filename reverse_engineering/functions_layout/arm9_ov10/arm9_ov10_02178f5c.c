
uint FUN_02178f5c(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1;
  if (param_1 < 8) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 0:
      break;
    case 1:
      uVar1 = 9;
      param_2 = -1;
      break;
    default:
      uVar1 = 0;
      param_2 = 0;
      param_1 = 0;
      break;
    case 3:
      uVar1 = 6;
      param_2 = -10;
      break;
    case 4:
      uVar1 = 6;
      param_2 = -0x1e;
      break;
    case 6:
      uVar1 = 6;
      param_2 = -0x46;
      break;
    case 7:
      uVar1 = 6;
      param_2 = -0x50;
    }
  }
  if (uVar1 != 0) {
    FUN_0217d118(uVar1,param_2 + -87000);
  }
  return param_1;
}

