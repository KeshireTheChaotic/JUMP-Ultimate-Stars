
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_027ecb60(void)

{
  int iVar1;
  
  iVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x10);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0xc) = 0x8c;
    *(undefined2 *)(iVar1 + 0xe) = 0;
    FUN_037f8e64(_DAT_0380fff4 + 0x188);
  }
  else {
    FUN_027e904c(1);
  }
  return iVar1 != 0;
}

