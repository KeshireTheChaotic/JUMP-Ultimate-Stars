
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e904c(ushort param_1)

{
  OS_DisableIrqMask(0x1000000);
  *(ushort *)(_DAT_0380fff4 + 0x3f4) = *(ushort *)(_DAT_0380fff4 + 0x3f4) | param_1;
  OS_EnableIrqMask();
  FUN_037f85f8(2,0x15);
  return;
}

