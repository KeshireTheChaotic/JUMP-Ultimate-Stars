
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03806c70(void)

{
  if (_DAT_0380fffc != &LAB_03806aa0) {
    DAT_0380ba58 = 0;
    DAT_0380ba5c = 0x380fe80;
    DAT_0380ba60 = 0x40;
    DAT_0380ba64 = _DAT_0380fffc;
    OS_DisableInterrupts();
    _DAT_0380fffc = &LAB_03806aa0;
    OS_RestoreInterrupts();
  }
  return;
}

