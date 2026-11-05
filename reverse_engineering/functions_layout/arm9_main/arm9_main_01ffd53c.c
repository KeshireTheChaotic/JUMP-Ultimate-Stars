
void FUN_01ffd53c(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  unaff_r4[0x101] = (char)((int)((uint)(byte)unaff_r4[0xff] + (uint)(byte)unaff_r4[0x103]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[-0xfd] + (uint)(byte)unaff_r4[0x103]) >> 1;
  unaff_r4[3] = (char)iVar1;
  unaff_r4[1] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-1]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[1] + (uint)(byte)unaff_r4[-1]) >> 1);
  unaff_r4[0x100] = (char)((int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[0xff]) >> 1);
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[3] + (uint)(byte)unaff_r4[1]) >> 1);
  unaff_r4[0x102] = (char)((int)((uint)(byte)unaff_r4[0x103] + (uint)(byte)unaff_r4[0x101]) >> 1);
  return;
}

