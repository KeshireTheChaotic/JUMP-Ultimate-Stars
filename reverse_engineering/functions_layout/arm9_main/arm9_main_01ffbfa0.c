
void FUN_01ffbfa0(void)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + 0x6ff) + (uint)*(byte *)(unaff_r4 + 0x707)) >> 1;
  *(char *)(unaff_r4 + 0x703) = (char)iVar1;
  *(char *)(unaff_r4 + 0x307) =
       (char)((int)((uint)*(byte *)(unaff_r4 + -0xf9) + (uint)*(byte *)(unaff_r4 + 0x707)) >> 1);
  *(char *)(unaff_r4 + 0x303) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + -0xfd)) >> 1);
  FUN_01ffd26c();
  FUN_01ffd26c();
  FUN_01ffd26c();
  FUN_01ffd26c();
  return;
}

