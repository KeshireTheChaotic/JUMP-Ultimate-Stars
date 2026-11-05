
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec4a4(uint param_1)

{
  int iVar1;
  
  iVar1 = FUN_027ec2bc();
  if (iVar1 == 0x40) {
    *(ushort *)(_DAT_0380fff4 + 0x530) =
         *(ushort *)(_DAT_0380fff4 + 0x530) & ~(ushort)(1 << (param_1 & 0xff));
  }
  return;
}

