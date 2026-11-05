
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02066468(void)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
                    /* JUS-TAG hw={"GX_3D":4} io=["04000440","04000448","04000454","04000600"] */
  _DAT_04000600 = _DAT_04000600 | 0x8000;
  do {
    iVar1 = FUN_020663b0(&local_10);
  } while (iVar1 != 0);
  do {
    iVar1 = FUN_02066384(&local_c);
  } while (iVar1 != 0);
  _DAT_04000440 = 2;
  _DAT_04000448 = local_10;
  _DAT_04000454 = 0;
  return;
}

