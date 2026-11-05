
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 FUN_02043090(void)

{
  undefined2 uVar1;
  
                    /* JUS-TAG hw={"IRQ":1} io=["04000208"] */
  uVar1 = _DAT_04000208;
  _DAT_04000208 = 1;
  return uVar1;
}

