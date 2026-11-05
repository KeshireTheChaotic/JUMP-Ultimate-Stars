
undefined4 FUN_0205b0e0(uint param_1)

{
  if (param_1 == 0) {
    return 1;
  }
  if ((param_1 & DAT_020ad62c) == 0) {
    FUN_02056848(param_1,0);
    DAT_020ad62c = DAT_020ad62c | param_1;
    return 1;
  }
  return 0;
}

