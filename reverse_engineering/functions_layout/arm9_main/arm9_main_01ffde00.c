
void FUN_01ffde00(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0x6ff] + (uint)(byte)unaff_r4[0x701]) >> 1;
  unaff_r4[0x700] = (char)iVar1;
  unaff_r4[0x301] = (char)((int)((uint)(byte)unaff_r4[-0xff] + (uint)(byte)unaff_r4[0x701]) >> 1);
  unaff_r4[0x300] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[0x100] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[0x101] = (char)((int)((uint)(byte)unaff_r4[0x301] + (uint)(byte)unaff_r4[-0xff]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[0x100] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[1] = (char)((int)((uint)(byte)unaff_r4[0x101] + (uint)(byte)unaff_r4[-0xff]) >> 1);
  unaff_r4[0x200] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[0x100]) >> 1);
  unaff_r4[0x201] = (char)((int)((uint)(byte)unaff_r4[0x301] + (uint)(byte)unaff_r4[0x101]) >> 1);
  unaff_r4[0x500] = (char)((int)((uint)(byte)unaff_r4[0x700] + (uint)(byte)unaff_r4[0x300]) >> 1);
  unaff_r4[0x501] = (char)((int)((uint)(byte)unaff_r4[0x701] + (uint)(byte)unaff_r4[0x301]) >> 1);
  unaff_r4[0x400] = (char)((int)((uint)(byte)unaff_r4[0x500] + (uint)(byte)unaff_r4[0x300]) >> 1);
  unaff_r4[0x401] = (char)((int)((uint)(byte)unaff_r4[0x501] + (uint)(byte)unaff_r4[0x301]) >> 1);
  unaff_r4[0x600] = (char)((int)((uint)(byte)unaff_r4[0x700] + (uint)(byte)unaff_r4[0x500]) >> 1);
  unaff_r4[0x601] = (char)((int)((uint)(byte)unaff_r4[0x701] + (uint)(byte)unaff_r4[0x501]) >> 1);
  return;
}

