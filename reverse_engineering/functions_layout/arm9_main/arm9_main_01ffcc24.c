
void FUN_01ffcc24(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0x6fe] + unaff_r6) >> 1;
  unaff_r4[0x700] = (char)iVar1;
  unaff_r4[0x302] = (char)((int)((uint)(byte)unaff_r4[-0xfe] + unaff_r6) >> 1);
  unaff_r4[0x300] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[0x100] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[0x102] = (char)((int)((uint)(byte)unaff_r4[0x302] + (uint)(byte)unaff_r4[-0xfe]) >> 1);
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[0x100] + (uint)(byte)unaff_r4[-0x100]) >> 1);
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[0x102] + (uint)(byte)unaff_r4[-0xfe]) >> 1);
  unaff_r4[0x200] = (char)((int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[0x100]) >> 1);
  unaff_r4[0x202] = (char)((int)((uint)(byte)unaff_r4[0x302] + (uint)(byte)unaff_r4[0x102]) >> 1);
  unaff_r4[0x500] = (char)((int)((uint)(byte)unaff_r4[0x700] + (uint)(byte)unaff_r4[0x300]) >> 1);
  unaff_r4[0x502] = (char)((int)((uint)(byte)unaff_r4[0x702] + (uint)(byte)unaff_r4[0x302]) >> 1);
  unaff_r4[0x400] = (char)((int)((uint)(byte)unaff_r4[0x500] + (uint)(byte)unaff_r4[0x300]) >> 1);
  unaff_r4[0x402] = (char)((int)((uint)(byte)unaff_r4[0x502] + (uint)(byte)unaff_r4[0x302]) >> 1);
  unaff_r4[0x600] = (char)((int)((uint)(byte)unaff_r4[0x700] + (uint)(byte)unaff_r4[0x500]) >> 1);
  unaff_r4[0x602] = (char)((int)((uint)(byte)unaff_r4[0x702] + (uint)(byte)unaff_r4[0x502]) >> 1);
  return;
}

