
void FUN_01ffe078(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int iVar3;
  
  bVar1 = unaff_r4[-0x100];
  bVar2 = unaff_r4[0xfe];
  FUN_01ff9450();
  iVar3 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  unaff_r4[0x100] = (char)iVar3;
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[-0x100] + iVar3) >> 1);
  return;
}

