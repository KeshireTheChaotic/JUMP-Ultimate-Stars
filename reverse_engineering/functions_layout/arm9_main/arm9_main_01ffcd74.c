
void FUN_01ffcd74(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + 0xeff) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0xf01) = (char)iVar1;
  *(char *)(unaff_r4 + 0x703) = (char)((int)((uint)*(byte *)(unaff_r4 + -0xfd) + unaff_r6) >> 1);
  *(char *)(unaff_r4 + 0x701) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + -0xff)) >> 1);
  FUN_01ffde00();
  FUN_01ffde00();
  FUN_01ffde00();
  FUN_01ffde00();
  return;
}

