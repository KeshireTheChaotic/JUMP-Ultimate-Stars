
void FUN_02001924(uint param_1)

{
  if (param_1 == 0) {
    DAT_02092fdc = 1;
  }
  else {
    DAT_02092fdc = param_1 & 0x7fffffff;
  }
  return;
}

