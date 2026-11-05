
void FUN_0380402c(int param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_1 != 0xb) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (DAT_03809c88 == 0) {
    DAT_03809c84 = param_2;
  }
  switch(DAT_03809c84) {
  case 0:
    if ((DAT_03809c88 != 0) && (DAT_03809c88 == 1)) {
      DAT_03809d7c = DAT_03809d7c | 0x10;
      DAT_03809c80 = param_2;
    }
    goto switchD_0380405c_default;
  case 1:
    goto switchD_0380405c_default;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  default:
    goto switchD_0380405c_default;
  }
  DAT_03809d7c = DAT_03809d7c | 0x10;
switchD_0380405c_default:
  if ((DAT_03809d7c & 0x10) == 0) {
    DAT_03809c88 = DAT_03809c88 + 1;
  }
  else {
    DAT_03809c88 = 0;
    if ((DAT_03809d7c & 4) == 0) {
      puVar1 = &DAT_03809cc8;
    }
    else {
      puVar1 = DAT_03809d6c;
    }
    FUN_037fc42c(puVar1);
  }
  return;
}

