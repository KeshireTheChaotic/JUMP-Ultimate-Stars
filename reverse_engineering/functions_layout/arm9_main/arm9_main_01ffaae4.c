
void FUN_01ffaae4(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  *(char *)(unaff_r4 + 0x707) = (char)((int)((uint)*(byte *)(unaff_r4 + 0x6ff) + unaff_r6) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xf1) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x30f) = (char)iVar1;
  *(char *)(unaff_r4 + 0x307) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0x2ff)) >> 1);
  FUN_01ffc3dc();
  FUN_01ffc3dc();
  FUN_01ffc3dc();
  FUN_01ffc3dc();
  return;
}

