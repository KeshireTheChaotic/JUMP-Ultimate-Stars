
undefined4 FUN_02157858(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_f0 [32];
  int local_d0;
  int local_cc;
  
  switch(*DAT_0216e718) {
  case 0:
  case 1:
  case 3:
  case 5:
    return 0;
  case 2:
    return 1;
  case 4:
    return 2;
  case 6:
    break;
  case 7:
    param_1 = 4;
  default:
    return param_1;
  }
  iVar1 = FUN_021501d8(auStack_f0);
  if (iVar1 != 1) {
    FUN_02055684();
  }
  if (((local_d0 < 0) || (3 < local_d0)) || (local_cc != 1)) {
    return 5;
  }
  return 3;
}

