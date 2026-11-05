
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02061e70(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1} io=["027ffc40"] */
  DAT_020aeca8 = 0xfffffffd;
  DAT_020aecac = 0;
  DAT_020aecb8 = 0;
  DAT_020aeca0 = &DAT_020aec40;
  MIi_CpuClearFast(0,&DAT_020aec40,0x60);
  DC_FlushRange(&DAT_020aec40,0x60);
  if (_DAT_027ffc40 != 2) {
    FUN_02051890(0x27ffe00,0x27ffa80,0x160);
  }
  DAT_020aecb4 = 0;
  DAT_020aecb0 = 0;
  DAT_020aedb0 = 0;
  DAT_020aedac = 0;
  DAT_020aeda8 = 4;
  FUN_02053528(&DAT_020aece4,0x2062c49,0,&DAT_020af2c0,0x400,4);
  FUN_020531dc(&DAT_020aece4);
  FUN_020558a4(0xb,0x2062c91);
  if (_DAT_027ffc40 != 2) {
    FUN_02061e40(1);
  }
  return;
}

