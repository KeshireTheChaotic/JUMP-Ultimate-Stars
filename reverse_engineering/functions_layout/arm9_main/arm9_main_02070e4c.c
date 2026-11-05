
void FUN_02070e4c(void)

{
  undefined4 in_r3;
  
  FUN_020517fc(&DAT_020b4118,0,0x3290,in_r3,in_r3);
  DAT_020b0b90 = DAT_020b0b90 & 0xfff00fff;
  FUN_02073114(0x8d8,4);
  DAT_020b02ac = 1;
  FUN_02073114(0x3e60,0x3290);
  return;
}

