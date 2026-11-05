
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027eaad8(uint param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG hw={"WIRELESS":1} io=["0480808c"] */
  if ((param_1 < 10) || (1000 < param_1)) {
    uVar1 = 5;
  }
  else {
    _DAT_0480808c = (undefined2)param_1;
    *(undefined2 *)(_DAT_0380fff4 + 0x3b2) = _DAT_0480808c;
    FUN_027ea36c(*(undefined2 *)(_DAT_0380fff4 + 0x338));
    uVar1 = 0;
  }
  return uVar1;
}

