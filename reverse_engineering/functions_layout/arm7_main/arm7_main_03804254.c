
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_03804254(void)

{
  bool bVar1;
  
                    /* JUS-TAG hw={"IRQ":1} io=["04000214"] */
  bVar1 = (_DAT_04000214 & 0x100000) == 0;
  if (!bVar1) {
    DAT_0380a4e8 = 1;
  }
  return bVar1;
}

