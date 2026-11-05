
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_027f084c(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x36);
  if (iVar1 == 0) {
    FUN_027e904c(2);
    iVar2 = 0;
  }
  else {
    *(undefined2 *)(iVar1 + 0xc) = 0xffff;
    iVar2 = iVar1 + 0x10;
    FUN_027f07a4(iVar2,param_1);
    *(undefined2 *)(iVar1 + 0x3c) = param_2;
    *(undefined2 *)(iVar1 + 0x16) = 2;
    *(short *)(iVar1 + 0x22) = *(short *)(iVar1 + 0x16) + 0x1c;
    *(undefined2 *)(iVar1 + 0x24) = 0xc0;
  }
  return iVar2;
}

