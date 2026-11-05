
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eaff8(uint param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 10) {
    uVar1 = 5;
  }
  else {
    *(short *)(_DAT_0380fff4 + 0x33c) = (short)param_1;
    if (param_2 != 0) {
      _DAT_04808134 = (short)param_1;
    }
    if (*(short *)(_DAT_0380fff4 + 0x4a4) != 0) {
      iVar2 = *(int *)(_DAT_0380fff4 + 0x4ac) + 0x24 + (uint)*(ushort *)(_DAT_0380fff4 + 0x3da);
      if (*(short *)(_DAT_0380fff4 + 0x352) == 1) {
        FUN_027e93d0(iVar2 + 6,param_1 & 0xff);
        FUN_027e93d0(iVar2 + 7,(int)param_1 >> 8 & 0xff);
      }
      else {
        FUN_027e93d0(iVar2 + 6,0xff);
        FUN_027e93d0(iVar2 + 7,0xff);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

