
void FUN_01ffc3dc(void)

{
  int iVar1;
  int unaff_r4;
  
  *(char *)(unaff_r4 + 0x303) =
       (char)((int)((uint)*(byte *)(unaff_r4 + 0x2ff) + (uint)*(byte *)(unaff_r4 + 0x307)) >> 1);
  iVar1 = (int)((uint)*(byte *)(unaff_r4 + -0xf9) + (uint)*(byte *)(unaff_r4 + 0x307)) >> 1;
  *(char *)(unaff_r4 + 0x107) = (char)iVar1;
  *(char *)(unaff_r4 + 0x103) = (char)((int)(iVar1 + (uint)*(byte *)(unaff_r4 + 0xff)) >> 1);
  FUN_01ffd53c();
  FUN_01ffd53c();
  FUN_01ffd53c();
  FUN_01ffd53c();
  return;
}

