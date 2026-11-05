
undefined4
FUN_02161840(undefined4 param_1,int param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  if (param_3 == 0) {
    switch(param_4) {
    case 0:
      break;
    case 1:
      FUN_02161b44(param_2);
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
    return 1;
  }
  if (param_3 == 1) {
    return 0;
  }
  if (param_3 == 2) {
    *(ushort **)(param_2 + 0x14) = param_5;
    *(uint *)(param_2 + 0x40) = (uint)*param_5;
    FUN_02161b44(param_2);
    return 1;
  }
  return 0;
}

