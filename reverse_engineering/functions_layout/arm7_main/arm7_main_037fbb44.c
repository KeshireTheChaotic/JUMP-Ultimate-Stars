
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fbb44(int param_1)

{
  uint uVar1;
  code *pcVar2;
  
  uVar1 = 1 << ((ushort)(&DAT_03808124)[param_1] & 0xff);
  pcVar2 = (code *)(&DAT_03808250)[param_1 * 3];
  (&DAT_03808250)[param_1 * 3] = 0;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)((&DAT_03808258)[param_1 * 3]);
  }
  _DAT_0380fff8 = _DAT_0380fff8 | uVar1;
  if ((&DAT_03808254)[param_1 * 3] == 0) {
    OS_DisableIrqMask(uVar1);
  }
  return;
}

