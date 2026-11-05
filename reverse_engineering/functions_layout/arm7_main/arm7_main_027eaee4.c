
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eaee4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    *(short *)(_DAT_0380fff4 + 0x332) = (short)param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 5;
  }
  return uVar1;
}

