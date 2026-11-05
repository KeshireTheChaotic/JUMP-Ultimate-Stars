
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1c04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["048080ac","048080ae"] */
  iVar1 = _DAT_0380fff4;
  iVar2 = _DAT_0380fff4 + 0x1ac;
  *(int *)(_DAT_0380fff4 + 0x550) = *(int *)(_DAT_0380fff4 + 0x550) + 1;
  if ((*(ushort *)(param_1 + 0x14) & 0xf) >> 2 == 0) {
    FUN_027ec698();
    FUN_037f8a3c(iVar2,iVar1 + 0x1a0,param_1 + -0x10);
    FUN_027f1d98(param_1,0);
  }
  else {
    FUN_027efb30(iVar2,param_1 + -0x10);
  }
  *(undefined2 *)(_DAT_0380fff4 + 0x454) = 0;
  if ((*(ushort *)(*(int *)(_DAT_0380fff4 + 0x45c) + 0xc) & 0x3fff) >> 0xd == 0) {
    _DAT_048080ac = 8;
    _DAT_048080ae = 5;
    if (param_2 != 0) {
      if (*(short *)(iVar1 + 0x1a8) != 0) {
        FUN_027f258c(1);
      }
      if (*(short *)(iVar1 + 0x19c) != 0) {
        FUN_027f258c(0);
      }
    }
  }
  if (*(short *)(iVar1 + 0x1b4) == 0) {
    FUN_027ec040(0);
  }
  else if (param_2 != 0) {
    FUN_027f258c(2);
  }
  return;
}

