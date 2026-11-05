
void FUN_02071e24(int param_1)

{
  if (param_1 == 0) {
    thunk_FUN_0205af08(0);
    if ((DAT_020b0b90 & 0x100000) != 0) {
      DAT_020b0b90 = DAT_020b0b90 & 0xffefffff;
      FUN_02073114(0x8d8,4);
      DAT_020b02ac = 1;
    }
  }
  else {
    thunk_FUN_0205af08(1);
    if ((DAT_020b0b90 & 0x100000) == 0) {
      FUN_0207120c(0x100000,1);
      DAT_020b02ac = 1;
      return;
    }
  }
  return;
}

