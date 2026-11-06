
uint FUN_021790e4(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1;
  if (param_1 < 7) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 1:
      uVar1 = 6;
      param_2 = -0x32;
      break;
    case 2:
      uVar1 = 6;
      param_2 = -0x1e;
      break;
    case 3:
      uVar1 = 6;
      param_2 = -0x14;
      break;
    case 4:
      uVar1 = 6;
      param_2 = -0x28;
      break;
    case 5:
      uVar1 = 9;
      param_2 = -1;
      break;
    case 6:
      uVar1 = 9;
      param_2 = -2;
    }
  }
  FUN_0217d118(uVar1,param_2 + -85000);
  return param_1;
}

