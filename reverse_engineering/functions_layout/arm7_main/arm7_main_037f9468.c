
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f9468(uint param_1)

{
  int iVar1;
  
  iVar1 = _DAT_0380fff4;
  if (*(ushort *)(_DAT_0380fff4 + 0x34c) != param_1) {
    if (*(ushort *)(_DAT_0380fff4 + 0x34c) == 0x40) {
      FUN_027e9528();
    }
    if (param_1 == 0) {
      FUN_027ea468();
    }
    else if (param_1 == 0x10) {
      FUN_027ea4dc(0);
      FUN_037f93b0();
      FUN_027ea3d4();
    }
    else if (param_1 == 0x40) {
      if (*(short *)(iVar1 + 0x350) == 2) {
        FUN_027ea2e8();
      }
      FUN_027e96f8(100,FUN_027e9654);
    }
    *(short *)(iVar1 + 0x34c) = (short)param_1;
  }
  return;
}

