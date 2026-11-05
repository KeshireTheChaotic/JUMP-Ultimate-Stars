
void FUN_01ffa5dc(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + 0x6fe) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x706) = (char)iVar1;
  *(char *)(unaff_r4 + 0x30e) = (char)((int)((uint)*(byte *)(unaff_r4 + -0xf2) + unaff_r6) >> 1);
  *(char *)(unaff_r4 + 0x306) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + -0xfa)) >> 1);
  FUN_01ffbe70();
  FUN_01ffbe70();
  FUN_01ffbe70();
  FUN_01ffbe70();
  return;
}

