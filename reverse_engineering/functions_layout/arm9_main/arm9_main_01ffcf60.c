
void FUN_01ffcf60(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  
  unaff_r4[0x300] = (char)((int)((uint)(byte)unaff_r4[0x2fe] + (uint)(byte)unaff_r4[0x302]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[-0xfe] + (uint)(byte)unaff_r4[0x302]) >> 1;
  unaff_r4[0x102] = (char)iVar1;
  unaff_r4[0x100] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0xfe]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[0x100] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[0x102] + (uint)(byte)unaff_r4[-0xfe]) >> 1);
  unaff_r4[0x200] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[0x100]) >> 1);
  unaff_r4[0x202] = (char)((int)((uint)(byte)unaff_r4[0x302] + (uint)(byte)unaff_r4[0x102]) >> 1);
  return;
}

