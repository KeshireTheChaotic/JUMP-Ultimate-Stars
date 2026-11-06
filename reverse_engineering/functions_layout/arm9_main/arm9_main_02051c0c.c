
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02051c0c(int param_1)

{
  uint uVar1;
  ushort uVar2;
  code *pcVar3;
  
  pcVar3 = (code *)(&DAT_020aaaf8)[param_1 * 3];
  uVar2 = (&DAT_0209dce4)[param_1];
  (&DAT_020aaaf8)[param_1 * 3] = 0;
  uVar1 = 1 << (uVar2 & 0xff);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)((&DAT_020aab00)[param_1 * 3]);
  }
  _DAT_027c3ff8 = _DAT_027c3ff8 | uVar1;
  if ((&DAT_020aaafc)[param_1 * 3] == 0) {
    OS_DisableIrqMask(uVar1);
    return;
  }
  return;
}

