
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fc078(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":4}
                       io=["027fffb8","027fffbc","027ffff4","027ffff6"] */
  if (DAT_038082bc == 0) {
    DAT_038082bc = 1;
    _DAT_027ffff6 = 0;
    while (_DAT_027ffff4 != 0x7f) {
      SVC_WaitByLoop(0x400);
    }
    _DAT_027fffb8 = 0xffffffff;
    _DAT_027fffbc = 0xffff0000;
    _DAT_027ffff6 = 0xbf;
  }
  return;
}

