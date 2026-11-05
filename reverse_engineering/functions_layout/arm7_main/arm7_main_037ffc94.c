
void FUN_037ffc94(uint param_1,uint param_2)

{
  if ((param_2 & 1) == 0) {
    DAT_03808a84 = DAT_03808a84 & ~param_1;
    return;
  }
  DAT_03808a80 = DAT_03808a80 & ~param_1;
  return;
}

