
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_020948a4::vfunc_05 [class-virtual] slot 5 of vtable 020948a4 (own slot, not
   inherited) */

void jus_Class_020948a4::vfunc_05(void)

{
  uint uVar1;
  
                    /* JUS-TAG hw={"GX_3D":1} io=["04000540"] */
  (**(code **)(*DAT_020a0dfc + 0x10))();
  FUN_020322bc(DAT_020a0cec);
  _DAT_04000540 = 0;
  FUN_0203efb8(DAT_020a0f20);
  FUN_020322fc(DAT_020a0cec);
  (**(code **)(*DAT_020a0dfc + 0x14))();
  uVar1 = 0;
  do {
    FUN_0203c5ac((&DAT_020a1700)[uVar1]);
    FUN_0203c5ac((&DAT_020a1710)[uVar1]);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}

