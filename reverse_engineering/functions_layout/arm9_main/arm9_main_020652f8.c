
/* JUS-SDK resetBankForX_ [behavioral] clears the field it is given, adds those banks to the LCDC
   field, GX_VRAMCNT_SetLCDC_ */

ushort resetBankForX_(ushort *param_1)

{
  ushort uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  DAT_020afba0 = DAT_020afba0 | uVar1;
  GX_VRAMCNT_SetLCDC_(uVar1);
  return uVar1;
}

