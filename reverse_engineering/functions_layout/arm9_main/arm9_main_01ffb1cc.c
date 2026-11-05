
void FUN_01ffb1cc(void)

{
  byte bVar1;
  byte bVar2;
  undefined1 *unaff_r4;
  int unaff_r6;
  int iVar3;
  
  bVar1 = unaff_r4[-0xf2];
  bVar2 = unaff_r4[-2];
  FUN_01ff9450();
  iVar3 = ((uint)bVar1 + (uint)bVar2 + 1 >> 1) + unaff_r6 * 2;
  unaff_r4[0xe] = (char)iVar3;
  iVar3 = (int)((uint)(byte)unaff_r4[-2] + iVar3) >> 1;
  unaff_r4[6] = (char)iVar3;
  iVar3 = (int)((uint)(byte)unaff_r4[-2] + iVar3) >> 1;
  unaff_r4[2] = (char)iVar3;
  *unaff_r4 = (char)((int)((uint)(byte)unaff_r4[-2] + iVar3) >> 1);
  unaff_r4[4] = (char)((int)((uint)(byte)unaff_r4[2] + (uint)(byte)unaff_r4[6]) >> 1);
  iVar3 = (int)((uint)(byte)unaff_r4[6] + (uint)(byte)unaff_r4[0xe]) >> 1;
  unaff_r4[10] = (char)iVar3;
  unaff_r4[8] = (char)((int)((uint)(byte)unaff_r4[6] + iVar3) >> 1);
  unaff_r4[0xc] = (char)((int)((uint)(byte)unaff_r4[10] + (uint)(byte)unaff_r4[0xe]) >> 1);
  return;
}

