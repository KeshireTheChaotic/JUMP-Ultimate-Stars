
undefined4 FUN_0218643c(int param_1,uint param_2,int param_3)

{
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  
  if (((param_1 == 0) && (param_2 == 0)) && (param_3 == 0)) {
    return 1;
  }
  if (((param_1 < 0) || ((int)param_2 < 0)) || (param_3 < 0)) {
    return 0;
  }
  if (0xc < param_2) {
    return 0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_2) {
  case 0:
    if (param_1 != 0) {
      return 0;
    }
    break;
  default:
    if (0x1f < param_1) {
      return 0;
    }
    break;
  case 2:
    FUN_0200d12c(param_3,4);
    if (((extraout_r1 == 0) && (FUN_0200d12c(param_3,100), extraout_r1_00 != 0)) ||
       (FUN_0200d12c(param_3,400), extraout_r1_01 == 0)) {
      if (0x1d < param_1) {
        return 0;
      }
    }
    else if (0x1c < param_1) {
      return 0;
    }
    break;
  case 4:
    if (0x1e < param_1) {
      return 0;
    }
  }
  if (param_3 < 0x76c) {
    return 0;
  }
  if (0x81f < param_3) {
    return 0;
  }
  if (param_3 == 0x81f) {
    if (6 < (int)param_2) {
      return 0;
    }
    if ((param_2 == 6) && (6 < param_1)) {
      return 0;
    }
  }
  return 1;
}

