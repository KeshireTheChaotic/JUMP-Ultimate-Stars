
void FUN_01ffba34(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  *(char *)(unaff_r4 + 0x702) = (char)((int)((uint)*(byte *)(unaff_r4 + 0x6fe) + unaff_r6) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xfa) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x306) = (char)iVar1;
  *(char *)(unaff_r4 + 0x302) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0x2fe)) >> 1);
  FUN_01ffcf60();
  FUN_01ffcf60();
  FUN_01ffcf60();
  FUN_01ffcf60();
  return;
}

