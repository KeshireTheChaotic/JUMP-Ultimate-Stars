
void FUN_01ffd504(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int iVar3;
  
  bVar1 = unaff_r4[-0xfe];
  bVar2 = unaff_r4[-2];
  FUN_01ff9450();
  iVar3 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  unaff_r4[2] = (char)iVar3;
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[-2] + iVar3) >> 1);
  return;
}

