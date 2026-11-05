
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027f5730(void)

{
  undefined4 uVar1;
  uint local_8 [2];
  
  FUN_03804814(*(undefined4 *)(_DAT_0380fff4 + 0x314));
  FUN_027f58d4();
  local_8[0] = 0;
  FUN_027f6584(0x2c,2,local_8);
  FUN_038047a8(*(undefined4 *)(_DAT_0380fff4 + 0x314));
  if ((local_8[0] < 0xa4) || (0x1d6 < local_8[0])) {
    uVar1 = 0;
  }
  else {
    local_8[0] = local_8[0] + 2;
    uVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188);
    *(undefined4 *)(_DAT_0380fff4 + 0x318) = uVar1;
    if (*(int *)(_DAT_0380fff4 + 0x318) == 0) {
      uVar1 = 0;
    }
    else {
      *(int *)(_DAT_0380fff4 + 0x318) = *(int *)(_DAT_0380fff4 + 0x318) + 0xc;
      FUN_03804814(*(undefined4 *)(_DAT_0380fff4 + 0x314));
      FUN_027f58d4();
      FUN_027f6584(0x2a,local_8[0],*(undefined4 *)(_DAT_0380fff4 + 0x318));
      FUN_038047a8(*(undefined4 *)(_DAT_0380fff4 + 0x314));
      uVar1 = 1;
    }
  }
  return uVar1;
}

