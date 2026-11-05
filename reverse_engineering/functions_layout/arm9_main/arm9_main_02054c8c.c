
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02054c8c(void)

{
                    /* JUS-TAG hw={"TIMER":2} io=["04000100","04000102"] */
  if (DAT_020aae88 == 0) {
    DAT_020aae88 = 1;
    FUN_02054b18(0);
    DAT_020aae90 = 0;
    DAT_020aae94 = 0;
    _DAT_04000100 = 0;
    _DAT_04000102 = 0xc1;
    FUN_02051eec(8,FUN_02054bf4);
    FUN_02051d5c(8);
    DAT_020aae8c = 0;
    return;
  }
  return;
}

