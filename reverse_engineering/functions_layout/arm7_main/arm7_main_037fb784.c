
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fb784(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["0480819c"] */
  iVar1 = 4000;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if ((_DAT_0480819c & 0x80) != 0) break;
    iVar1 = iVar1 + -1;
  }
  return;
}

