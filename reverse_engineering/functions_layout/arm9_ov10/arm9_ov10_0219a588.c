
void FUN_0219a588(void)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 in_r3;
  
  if (DAT_0214ccf8 == 0) {
    return;
  }
  uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar1,1);
  *(char *)(DAT_0214ccf8 + 0x5d) = (char)extraout_r1;
  FUN_021a1d18(DAT_0214ccf8 + 0x88,&DAT_021a3658 + extraout_r1 * 0x2a,DAT_0214ccf8,&DAT_021a3658,
               in_r3);
  return;
}

