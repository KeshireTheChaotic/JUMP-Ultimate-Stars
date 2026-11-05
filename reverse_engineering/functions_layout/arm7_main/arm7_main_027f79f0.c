
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f79f0(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"RTC":1} io=["04000138"] */
  _DAT_04000138 = _DAT_04000138 & 0xff88 | 0x74;
  uVar1 = 0;
  do {
    iVar2 = 9;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    _DAT_04000138 =
         _DAT_04000138 & 0xfffc | (ushort)(((param_1 | param_2) >> (uVar1 & 0xff) & 1) != 0) | 2;
    iVar2 = 9;
    do {
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar1 = uVar1 + 1;
  } while (uVar1 != 8);
  return;
}

