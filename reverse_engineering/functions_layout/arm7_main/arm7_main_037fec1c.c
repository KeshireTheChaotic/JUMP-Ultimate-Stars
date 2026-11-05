
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fec1c(ushort param_1,ushort param_2)

{
                    /* JUS-TAG hw={"KEYPAD":1} io=["04000134"] */
  _DAT_04000134 = param_2 | ~param_1 & _DAT_04000134;
  return;
}

