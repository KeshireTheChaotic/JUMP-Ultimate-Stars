
void FUN_02158bf8(void)

{
  uint uVar1;
  
  DAT_0216e730 = 0;
  FUN_02158aec();
  FUN_02154978(0x10);
  FUN_0216244c(3);
  FUN_02154588(0x39,0xffffffff);
  DAT_0216e738 = (uint *)FUN_02165ff4(0,0x5b);
  *DAT_0216e738 = (DAT_0216a8f4 & 0x1ff) << 0x10 | *DAT_0216e738 & 0xfe00ff00 | DAT_0216a8f6 & 0xff;
  *(ushort *)(DAT_0216e738 + 1) = (ushort)DAT_0216e738[1] & 0xf3ff | 0xc00;
  uVar1 = (uint)DAT_0216e72c;
  FUN_021547e4((&DAT_0216a940)[uVar1 * 4],(&DAT_0216a944)[uVar1 * 4],(&DAT_0216a942)[uVar1 * 4],
               (&DAT_0216a946)[uVar1 * 4]);
  FUN_02157088(0x2158ab1);
  return;
}

