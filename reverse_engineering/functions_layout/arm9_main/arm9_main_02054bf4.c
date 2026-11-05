
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02054bf4(void)

{
  bool bVar1;
  
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  bVar1 = 0xfffffffe < DAT_020aae90;
  DAT_020aae90 = DAT_020aae90 + 1;
  DAT_020aae94 = DAT_020aae94 + (uint)bVar1;
  if (DAT_020aae8c != 0) {
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    DAT_020aae8c = 0;
  }
  FUN_02051dc8(0,FUN_02054bf4,0);
  return;
}

