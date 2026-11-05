
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ecfa4(void)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(ushort *)(_DAT_0380fff4 + 0x428) = *(ushort *)(_DAT_0380fff4 + 0x428) & 0xfffe;
  FUN_037f8e64(iVar1 + 0x200,*(undefined4 *)(iVar1 + 0x424));
  if (*(short *)(iVar1 + 0x208) != 0) {
    FUN_037f85f8(2,0xb);
  }
  return;
}

