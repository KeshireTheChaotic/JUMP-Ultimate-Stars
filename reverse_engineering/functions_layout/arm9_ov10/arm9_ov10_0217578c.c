
undefined4 FUN_0217578c(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_021a73e8;
  }
  if (param_2 != (undefined4 *)0x0) {
    switch(DAT_021a73e4) {
    default:
      *param_2 = 0;
      break;
    case 1:
    case 9:
      *param_2 = 7;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 8:
      *param_2 = 6;
      break;
    case 6:
      *param_2 = 3;
      break;
    case 7:
      *param_2 = 4;
      break;
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
      *param_2 = 1;
      break;
    case 0xe:
      *param_2 = 5;
      break;
    case 0xf:
    case 0x11:
      *param_2 = 6;
      break;
    case 0x10:
      *param_2 = 2;
    }
  }
  return DAT_021a73e4;
}

