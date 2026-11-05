
void FUN_01ffc628(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0xff] + (uint)(byte)unaff_r4[0x107]) >> 1;
  unaff_r4[0x103] = (char)iVar1;
  unaff_r4[7] = (char)((int)((uint)(byte)unaff_r4[-0xf9] + (uint)(byte)unaff_r4[0x107]) >> 1);
  unaff_r4[3] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0xfd]) >> 1);
  unaff_r4[1] = (char)((int)((uint)(byte)unaff_r4[3] + (uint)(byte)unaff_r4[-1]) >> 1);
  unaff_r4[0x101] = (char)((int)((uint)(byte)unaff_r4[0x103] + (uint)(byte)unaff_r4[0xff]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[1] + (uint)(byte)unaff_r4[-1]) >> 1);
  unaff_r4[0x100] = (char)((int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[0xff]) >> 1);
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[3] + (uint)(byte)unaff_r4[1]) >> 1);
  unaff_r4[0x102] = (char)((int)((uint)(byte)unaff_r4[0x103] + (uint)(byte)unaff_r4[0x101]) >> 1);
  unaff_r4[5] = (char)((int)((uint)(byte)unaff_r4[7] + (uint)(byte)unaff_r4[3]) >> 1);
  unaff_r4[0x105] = (char)((int)((uint)(byte)unaff_r4[0x107] + (uint)(byte)unaff_r4[0x103]) >> 1);
  unaff_r4[4] = (char)((int)((uint)(byte)unaff_r4[5] + (uint)(byte)unaff_r4[3]) >> 1);
  unaff_r4[0x104] = (char)((int)((uint)(byte)unaff_r4[0x105] + (uint)(byte)unaff_r4[0x103]) >> 1);
  unaff_r4[6] = (char)((int)((uint)(byte)unaff_r4[7] + (uint)(byte)unaff_r4[5]) >> 1);
  unaff_r4[0x106] = (char)((int)((uint)(byte)unaff_r4[0x107] + (uint)(byte)unaff_r4[0x105]) >> 1);
  return;
}

