
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_02001c20(void)

{
  undefined4 uVar1;
  
  _DAT_020a06a4 = s_localhost_0209300c;
  puRam020a06a8 = &DAT_020a069c;
  uRam020a06ac = 2;
  uRam020a06ae = 0;
  puRam020a06b0 = &DAT_020a06c8;
  _DAT_020a06b4 = 0;
  uVar1 = func_0x0219321c();
  func_0x0219359c(uVar1,&DAT_020a06b4);
  if (_DAT_020a06b4 == 0) {
    return (undefined *)0x0;
  }
  _DAT_020a06c8 = &DAT_020a06b4;
  uRam020a06ae = 4;
  uRam020a06cc = 0;
  return &DAT_020a06a4;
}

