
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03806c24(void)

{
  if (_DAT_0380fffc == &LAB_03806aa0) {
    OS_DisableInterrupts();
    _DAT_0380fffc = DAT_0380ba64;
    OS_RestoreInterrupts();
  }
  return;
}

