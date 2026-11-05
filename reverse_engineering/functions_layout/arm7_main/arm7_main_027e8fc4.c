
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e8fc4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_0380fff4;
  if ((*(short *)(_DAT_0380fff4 + 0x3f4) != 0) &&
     (iVar2 = FUN_037f8910(_DAT_0380fff4 + 0x188,0x12), iVar2 != 0)) {
    *(undefined2 *)(iVar2 + 0xc) = 0x186;
    *(undefined2 *)(iVar2 + 0xe) = 1;
    FUN_037fbc10(0x1000000);
    *(undefined2 *)(iVar2 + 0x10) = *(undefined2 *)(iVar1 + 0x3f4);
    *(undefined2 *)(iVar1 + 0x3f4) = 0;
    FUN_037fbc4c();
    FUN_037f8e64(_DAT_0380fff4 + 0x188,iVar2);
  }
  return;
}

