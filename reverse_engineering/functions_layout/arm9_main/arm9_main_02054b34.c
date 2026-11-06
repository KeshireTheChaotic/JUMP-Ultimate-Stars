
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK OS_GetTickLo [behavioral] returns the 16-bit timer-0 counter (TM0CNT_L) */

undefined2 OS_GetTickLo(void)

{
                    /* JUS-TAG hw={"TIMER":1} io=["04000100"] */
  return _DAT_04000100;
}

