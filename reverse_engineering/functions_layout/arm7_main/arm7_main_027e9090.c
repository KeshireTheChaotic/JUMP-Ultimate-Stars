
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e9090(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["04808004"] */
  iVar2 = _DAT_0380fff4;
  iVar3 = _DAT_0380fff4 + 0x42c;
  if (*(short *)(_DAT_0380fff4 + 0x350) == 1) {
    iVar1 = FUN_027e9228(_DAT_0380fff4 + 0x4a4);
    if (iVar1 != 0) {
      FUN_027e91e4();
      FUN_027f10bc();
    }
    iVar1 = FUN_027e9228(iVar2 + 0x454);
    if (iVar1 != 0) {
      FUN_027e9198(iVar2 + 0x454);
    }
  }
  else if (*(short *)(_DAT_0380fff4 + 0x350) == 2) {
    FUN_027e9228(_DAT_0380fff4 + 0x490);
    iVar1 = FUN_027e9228(iVar2 + 0x454);
    if (iVar1 != 0) {
      if (*(short *)(iVar2 + 0x454) != 0) {
        FUN_027e91e4();
      }
      FUN_027f07f8(*(undefined2 *)(iVar2 + 0x3ae));
      *(short *)(iVar2 + 0x3fc) = *(short *)(iVar2 + 0x3fc) + 1;
    }
  }
  iVar1 = FUN_027e9228(iVar2 + 0x440);
  if (iVar1 != 0) {
    FUN_027e9198(iVar2 + 0x440);
  }
  iVar2 = FUN_027e9228(iVar3);
  if (iVar2 != 0) {
    FUN_027e9198(iVar3);
  }
  if (_DAT_04808004 == 0) {
    _DAT_04808004 = 1;
  }
  return;
}

