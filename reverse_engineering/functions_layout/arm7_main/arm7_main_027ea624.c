
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ea624(ushort *param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  *(ushort *)(_DAT_0380fff4 + 0x3a4) = *param_1;
  *(ushort *)(iVar1 + 0x3a6) = param_1[1] | *param_1;
  FUN_027ea590();
  return 0;
}

