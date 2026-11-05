
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_027ecf28(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x18);
  if (iVar1 != 0) {
    *(undefined2 *)(iVar1 + 0xc) = 0x84;
    *(undefined2 *)(iVar1 + 0xe) = 4;
    FUN_027ea0c8(iVar1 + 0x10,param_1);
    *(undefined2 *)(iVar1 + 0x16) = param_2;
    FUN_037f8e64(_DAT_0380fff4 + 0x188,iVar1);
  }
  else {
    FUN_027e904c(1);
  }
  return iVar1 != 0;
}

