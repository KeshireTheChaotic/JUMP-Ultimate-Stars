
void FUN_0206550c(uint param_1)

{
  ushort uVar1;
  code *in_lr;
  
  uVar1 = (ushort)param_1;
  DAT_020afba0 = ~uVar1 & (DAT_020afba0 | DAT_020afbac);
  DAT_020afbac = uVar1;
  if (param_1 < 0xd) {
    (*(code *)(*(short *)(param_1 * 2 + 0x2065530) + 0x2065530))();
    return;
  }
  GX_VRAMCNT_SetLCDC_(DAT_020afba0);
  (*in_lr)();
  return;
}

