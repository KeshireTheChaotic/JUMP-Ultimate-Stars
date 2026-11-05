
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_027e9334(void)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(short *)(_DAT_0380fff4 + 0x5f4) =
       *(short *)(_DAT_0380fff4 + 0x5f4) * *(short *)(_DAT_0380fff4 + 0x5f0) +
       *(short *)(_DAT_0380fff4 + 0x5f2);
  return *(undefined2 *)(iVar1 + 0x5f4);
}

