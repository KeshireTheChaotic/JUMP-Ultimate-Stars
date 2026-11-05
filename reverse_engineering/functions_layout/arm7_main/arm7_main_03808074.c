
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03808074(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff96"] */
  FUN_037fce24(&DAT_027f97c8);
  while( true ) {
    if ((_DAT_027fff96 & 1) == 0) break;
    SVC_WaitByLoop(0x100);
  }
  _DAT_027fff96 = _DAT_027fff96 | 1;
  return *(undefined4 *)(DAT_027f97ec + 8);
}

