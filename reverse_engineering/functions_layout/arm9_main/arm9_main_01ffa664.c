
void FUN_01ffa664(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + 0xeff) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0xf07) = (char)iVar1;
  *(char *)(unaff_r4 + 0x70f) = (char)((int)((uint)*(byte *)(unaff_r4 + -0xf1) + unaff_r6) >> 1);
  *(char *)(unaff_r4 + 0x707) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + -0xf9)) >> 1);
  FUN_01ffbfa0();
  FUN_01ffbfa0();
  FUN_01ffbfa0();
  FUN_01ffbfa0();
  return;
}

