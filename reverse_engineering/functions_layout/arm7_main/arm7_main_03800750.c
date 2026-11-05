
void FUN_03800750(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  switch(param_3) {
  case 0:
    *param_1 = *param_1 & 0xfb;
    break;
  case 1:
    *param_1 = *param_1 | 4;
    break;
  case 2:
    *param_1 = *param_1 | 4;
    FUN_03801898(param_1,param_2,0xffffffff);
    break;
  case 3:
    *param_1 = *param_1 | 4;
    FUN_03801898(param_1,param_2,0x7f);
    FUN_0380185c(param_1);
  }
  return;
}

