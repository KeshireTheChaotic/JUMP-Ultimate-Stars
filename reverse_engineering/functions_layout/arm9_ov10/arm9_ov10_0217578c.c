
uint FUN_0217578c(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = DAT_021a73e8;
  }
  if (param_2 == (undefined4 *)0x0) {
    return DAT_021a73e4;
  }
  if (DAT_021a73e4 < 0x12) {
                    /* WARNING: Switch is manually overridden */
    switch(DAT_021a73e4) {
    case 0:
      goto switchD_021757ac_caseD_0;
    case 1:
    case 9:
      *param_2 = 7;
      break;
    default:
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
      *param_2 = 6;
      break;
    case 0x10:
      *param_2 = 2;
    }
  }
  else {
switchD_021757ac_caseD_0:
    *param_2 = 0;
  }
  return DAT_021a73e4;
}

