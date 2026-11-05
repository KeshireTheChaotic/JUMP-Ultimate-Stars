
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03807018(undefined4 param_1,uint param_2)

{
  int iVar1;
  
                    /* JUS-TAG hw={"EXMEMCNT":1} io=["04000204"] */
  if ((param_2 & 0x3f) == 3) {
    _DAT_04000204 = _DAT_04000204 & 0xff9f | (ushort)(((param_2 & 0x1ffffc0) >> 6) << 5);
    while (iVar1 = FUN_037fe9ec(0x11,0x12,0), iVar1 != 0) {
      SVC_WaitByLoop(1);
    }
  }
  else {
    FUN_037fe538();
  }
  return;
}

