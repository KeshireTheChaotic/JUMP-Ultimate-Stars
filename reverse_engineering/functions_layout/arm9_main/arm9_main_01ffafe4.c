
void FUN_01ffafe4(void)

{
  int iVar1;
  int unaff_r4;
  int unaff_r6;
  
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + 0x2ff) + unaff_r6) >> 1;
  *(char *)(unaff_r4 + 0x307) = (char)iVar1;
  *(char *)(unaff_r4 + 0x10f) = (char)((int)((uint)*(byte *)(unaff_r4 + -0xf1) + unaff_r6) >> 1);
  *(char *)(unaff_r4 + 0x107) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + -0xf9)) >> 1);
  FUN_01ffc628();
  FUN_01ffc628();
  FUN_01ffc628();
  FUN_01ffc628();
  return;
}

