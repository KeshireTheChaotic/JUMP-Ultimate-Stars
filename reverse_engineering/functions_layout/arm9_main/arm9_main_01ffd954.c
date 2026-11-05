
void FUN_01ffd954(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int iVar3;
  
  bVar1 = unaff_r4[-0x100];
  bVar2 = unaff_r4[0x6fe];
  FUN_01ff9450();
  iVar3 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  unaff_r4[0x700] = (char)iVar3;
  iVar3 = (int)((uint)(byte)unaff_r4[-0x100] + iVar3) >> 1;
  unaff_r4[0x300] = (char)iVar3;
  iVar3 = (int)((uint)(byte)unaff_r4[-0x100] + iVar3) >> 1;
  unaff_r4[0x100] = (char)iVar3;
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[-0x100] + iVar3) >> 1);
  unaff_r4[0x200] = (char)((int)((uint)(byte)unaff_r4[0x100] + (uint)(byte)unaff_r4[0x300]) >> 1);
  iVar3 = (int)((uint)(byte)unaff_r4[0x300] + (uint)(byte)unaff_r4[0x700]) >> 1;
  unaff_r4[0x500] = (char)iVar3;
  unaff_r4[0x400] = (char)((int)((uint)(byte)unaff_r4[0x300] + iVar3) >> 1);
  unaff_r4[0x600] = (char)((int)((uint)(byte)unaff_r4[0x500] + (uint)(byte)unaff_r4[0x700]) >> 1);
  return;
}

