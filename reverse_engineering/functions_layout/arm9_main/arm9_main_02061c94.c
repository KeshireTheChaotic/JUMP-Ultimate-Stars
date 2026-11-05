
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061c94(void)

{
  int iVar1;
  undefined2 *puVar2;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc3c"] */
  if (DAT_020aebb8 == 0) {
    DAT_020aebb8 = 1;
    DAT_020aebd0 = 0;
    DAT_020aebd4 = 0;
    thunk_FUN_02055910();
    do {
      iVar1 = FUN_0205587c(8,1);
    } while (iVar1 == 0);
    FUN_020558a4(8,0x2061bfd);
    iVar1 = 0;
    puVar2 = &DAT_020aebf8;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 4;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 5);
    FUN_02053f5c(&DAT_020aebe0);
    DAT_020aebc8 = _DAT_027ffc3c;
  }
  return;
}

