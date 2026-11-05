
void FUN_01ffbabc(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  *(char *)(unaff_r4 + 0xf03) = (char)((int)((uint)*(byte *)(unaff_r4 + 0xeff) + unaff_r6) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xf9) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x707) = (char)iVar1;
  *(char *)(unaff_r4 + 0x703) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0x6ff)) >> 1);
  FUN_01ffd014();
  FUN_01ffd014();
  FUN_01ffd014();
  FUN_01ffd014();
  return;
}

