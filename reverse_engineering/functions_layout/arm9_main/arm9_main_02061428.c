
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061428(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027fff90"] */
  if (DAT_020aeb98 == 0) {
    DAT_020aeb98 = 1;
    DAT_020aeb9c = 0;
    DAT_020aeba0 = 0;
    thunk_FUN_02055910();
    do {
      iVar1 = FUN_0205587c(9,1);
    } while (iVar1 == 0);
    _DAT_027fff90 = 0;
    FUN_020558a4(9,0x2061205);
  }
  return;
}

