
void FUN_0207120c(uint param_1,int param_2)

{
  if (param_1 != (param_1 & DAT_020b0b90)) {
    DAT_020b0b90 = param_1 | DAT_020b0b90;
    FUN_02073114(0x8d8,4);
    if (param_2 != 0) {
      DAT_020b02ac = 1;
    }
  }
  return;
}

