
void FUN_01ffe0b0(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  unaff_r4[0x300] = (char)((int)((uint)(byte)unaff_r4[0x2ff] + (uint)(byte)unaff_r4[0x301]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[-0xff] + (uint)(byte)unaff_r4[0x301]) >> 1;
  unaff_r4[0x101] = (char)iVar1;
  unaff_r4[0x100] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0xff]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[0x100] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[1] = (char)((int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[-0xff]) >> 1);
  unaff_r4[0x200] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[0x100]) >> 1);
  unaff_r4[0x201] = (char)((int)((uint)(byte)unaff_r4[0x301] + (uint)(byte)unaff_r4[0x101]) >> 1);
  return;
}

