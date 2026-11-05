
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9504(void)

{
  ushort uVar1;
  
  while( true ) {
    uVar1 = _DAT_04808010 & _DAT_04808012;
    if (uVar1 == 0) break;
    if ((uVar1 & 0x80) != 0) {
      FUN_037fa528();
    }
    if ((uVar1 & 0x40) != 0) {
      FUN_037fa5e4();
    }
    if ((uVar1 & 0x8000) != 0) {
      FUN_037f95e8();
    }
    if ((uVar1 & 0x4000) != 0) {
      FUN_037f9674();
    }
    if ((uVar1 & 0x2000) != 0) {
      FUN_037f9970();
    }
    if ((uVar1 & 0x800) != 0) {
      FUN_027ebc04();
    }
    if ((uVar1 & 8) != 0) {
      FUN_037f9a28();
    }
    if ((uVar1 & 4) != 0) {
      FUN_037f9b54();
    }
    if ((uVar1 & 1) != 0) {
      FUN_037f9f88();
    }
    if ((uVar1 & 0x30) != 0) {
      FUN_037f99ec();
    }
    if ((uVar1 & 2) != 0) {
      FUN_037f9d18();
    }
    if ((uVar1 & 0x1000) != 0) {
      FUN_037fa418(1);
    }
  }
  _DAT_0380fff8 = _DAT_0380fff8 | 0x1000000;
  return;
}

