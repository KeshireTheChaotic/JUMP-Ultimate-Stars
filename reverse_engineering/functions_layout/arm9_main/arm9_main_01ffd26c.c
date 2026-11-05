
void FUN_01ffd26c(void)

{
  int iVar1;
  int iVar2;
  undefined1 *unaff_r4;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0x2ff] + (uint)(byte)unaff_r4[0x303]) >> 1;
  unaff_r4[0x301] = (char)iVar1;
  unaff_r4[0x103] = (char)((int)((uint)(byte)unaff_r4[-0xfd] + (uint)(byte)unaff_r4[0x303]) >> 1);
  iVar1 = (int)(iVar1 + (uint)(byte)unaff_r4[-0xff]) >> 1;
  unaff_r4[0x101] = (char)iVar1;
  iVar2 = (int)((uint)(byte)unaff_r4[0xff] + iVar1) >> 1;
  unaff_r4[0x100] = (char)iVar2;
  unaff_r4[1] = (char)((int)((uint)(byte)unaff_r4[-0xff] + iVar1) >> 1);
  *unaff_r4 = (char)((int)(iVar2 + (uint)(byte)unaff_r4[-0x100]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[0x103]) >> 1;
  unaff_r4[0x102] = (char)iVar1;
  unaff_r4[3] = (char)((int)((uint)(byte)unaff_r4[-0xfd] + (uint)(byte)unaff_r4[0x103]) >> 1);
  unaff_r4[2] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0xfe]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x2ff] + (uint)(byte)unaff_r4[0x301]) >> 1;
  unaff_r4[0x300] = (char)iVar1;
  unaff_r4[0x201] = (char)((int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[0x301]) >> 1);
  unaff_r4[0x200] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0x100]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x301] + (uint)(byte)unaff_r4[0x303]) >> 1;
  unaff_r4[0x302] = (char)iVar1;
  unaff_r4[0x203] = (char)((int)((uint)(byte)unaff_r4[0x103] + (uint)(byte)unaff_r4[0x303]) >> 1);
  unaff_r4[0x202] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0x102]) >> 1);
  return;
}

