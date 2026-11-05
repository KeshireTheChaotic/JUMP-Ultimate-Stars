
void FUN_01ffc328(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  unaff_r4[0x102] = (char)((int)((uint)(byte)unaff_r4[0xfe] + (uint)(byte)unaff_r4[0x106]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[-0xfa] + (uint)(byte)unaff_r4[0x106]) >> 1;
  unaff_r4[6] = (char)iVar1;
  unaff_r4[2] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-2]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[2] + (uint)(byte)unaff_r4[-2]) >> 1);
  unaff_r4[0x100] = (char)((int)((uint)(byte)unaff_r4[0x102] + (uint)(byte)unaff_r4[0xfe]) >> 1);
  unaff_r4[4] = (char)((int)((uint)(byte)unaff_r4[6] + (uint)(byte)unaff_r4[2]) >> 1);
  unaff_r4[0x104] = (char)((int)((uint)(byte)unaff_r4[0x106] + (uint)(byte)unaff_r4[0x102]) >> 1);
  return;
}

