
void FUN_01ffaa60(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  *(char *)(unaff_r4 + 0x306) = (char)((int)((uint)*(byte *)(unaff_r4 + 0x2fe) + unaff_r6) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xf2) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x10e) = (char)iVar1;
  *(char *)(unaff_r4 + 0x106) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0xfe)) >> 1);
  FUN_01ffc328();
  FUN_01ffc328();
  FUN_01ffc328();
  FUN_01ffc328();
  return;
}

