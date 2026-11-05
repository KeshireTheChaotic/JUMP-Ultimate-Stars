
void FUN_01ffd20c(void)

{
  int iVar1;
  undefined1 *unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)(byte)unaff_r4[0xfe] + unaff_r6) >> 1;
  unaff_r4[0x100] = (char)iVar1;
  unaff_r4[2] = (char)((int)((uint)(byte)unaff_r4[-0xfe] + unaff_r6) >> 1);
  *unaff_r4 = (char)((int)(iVar1 + (uint)(byte)unaff_r4[-0x100]) >> 1);
  return;
}

