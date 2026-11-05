
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eb3d4(ushort *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 & 1) == 0) {
    FUN_027ea0c8(_DAT_0380fff4 + 0x324,param_1);
    FUN_027ea0c8(&DAT_04808018,param_1);
    *(uint *)(_DAT_0380fff4 + 0x340) = *(uint *)(_DAT_0380fff4 + 0x340) | 2;
    uVar1 = 0;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}

