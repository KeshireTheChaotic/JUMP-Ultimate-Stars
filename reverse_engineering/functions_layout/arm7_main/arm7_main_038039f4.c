
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_038039f4(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
                    /* JUS-TAG hw={"CARD":1} io=["040001a0"] */
  _DAT_040001a0 = 0xa040;
  DAT_0380a2a8 = param_1;
  DAT_0380a2ac = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    DAT_0380a2a4 = DAT_0380a2a4 + -1;
    if (DAT_0380a2a4 == 0) {
      _DAT_040001a0 = 0xa000;
    }
    do {
    } while ((_DAT_040001a0 & 0x80) != 0);
    (*param_4)(&DAT_0380a2a4);
  }
  if (DAT_0380a2a4 == 0) {
    _DAT_040001a0 = 0;
  }
  return;
}

