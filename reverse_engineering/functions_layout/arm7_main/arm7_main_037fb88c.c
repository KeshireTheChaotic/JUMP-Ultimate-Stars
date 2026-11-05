
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_037fb88c(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["0480815e"] */
  uVar1 = 0;
  while( true ) {
    if (0x27ff < uVar1) {
      return 1;
    }
    if ((_DAT_0480815e & 1) == 0) break;
    uVar1 = uVar1 + 1;
  }
  return 0;
}

