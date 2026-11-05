
void FUN_02071ed8(uint param_1)

{
  FUN_020733b8();
  if (DAT_020b0b95 != param_1) {
    DAT_020b0b95 = (byte)param_1;
    FUN_02073114(0x8dd,1);
    DAT_020b02ac = 1;
  }
  return;
}

