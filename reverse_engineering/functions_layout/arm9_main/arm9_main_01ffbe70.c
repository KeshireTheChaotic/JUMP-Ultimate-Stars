
void FUN_01ffbe70(void)

{
  int iVar1;
  int iVar2;
  undefined1 *unaff_r4;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0x2fe] + (uint)(byte)unaff_r4[0x306]) >> 1;
  unaff_r4[0x302] = (char)iVar1;
  unaff_r4[0x106] = (char)((int)((uint)(byte)unaff_r4[-0xfa] + (uint)(byte)unaff_r4[0x306]) >> 1);
  iVar1 = (int)(iVar1 + (uint)(byte)unaff_r4[-0xfe]) >> 1;
  unaff_r4[0x102] = (char)iVar1;
  iVar2 = (int)((uint)(byte)unaff_r4[0xfe] + iVar1) >> 1;
  unaff_r4[0x100] = (char)iVar2;
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[-0xfe] + iVar1) >> 1);
  *unaff_r4 = (char)((int)(iVar2 + (uint)(byte)unaff_r4[-0x100]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x102] + (uint)(byte)unaff_r4[0x106]) >> 1;
  unaff_r4[0x104] = (char)iVar1;
  unaff_r4[6] = (char)((int)((uint)(byte)unaff_r4[-0xfa] + (uint)(byte)unaff_r4[0x106]) >> 1);
  unaff_r4[4] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0xfc]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x2fe] + (uint)(byte)unaff_r4[0x302]) >> 1;
  unaff_r4[0x300] = (char)iVar1;
  unaff_r4[0x202] = (char)((int)((uint)(byte)unaff_r4[0x102] + (uint)(byte)unaff_r4[0x302]) >> 1);
  unaff_r4[0x200] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0x100]) >> 1);
  iVar1 = (int)((uint)(byte)unaff_r4[0x302] + (uint)(byte)unaff_r4[0x306]) >> 1;
  unaff_r4[0x304] = (char)iVar1;
  unaff_r4[0x206] = (char)((int)((uint)(byte)unaff_r4[0x106] + (uint)(byte)unaff_r4[0x306]) >> 1);
  unaff_r4[0x204] = (char)((int)(iVar1 + (uint)(byte)unaff_r4[0x104]) >> 1);
  return;
}

