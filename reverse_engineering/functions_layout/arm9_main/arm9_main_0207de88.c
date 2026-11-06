
undefined4 FUN_0207de88(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  switch(param_2) {
  case 0:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0x20000;
      param_3[2] = 0x3ff;
      param_3[3] = 0x3ff;
    }
    return 1;
  case 1:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0x4000;
      param_3[3] = 0x20000;
    }
    break;
  case 2:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0x3c000;
      param_3[1] = 0;
      param_3[2] = 0xfffc43ff;
      param_3[3] = 0x20000;
    }
    return 2;
  case 3:
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0x3ff;
      param_3[3] = 0;
    }
    return 3;
  default:
    return 0xffffffff;
  }
  return 2;
}

