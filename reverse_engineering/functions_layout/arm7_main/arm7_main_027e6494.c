
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e6494(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"IO_other":1} io=["04000006"] */
  if (((0xcf < _DAT_04000006) && (_DAT_04000006 < 0xd4)) && (0x7e < *(uint *)(DAT_027f97f0 + 0xd8)))
  {
    for (iVar1 = 1; (iVar1 < 7 && (iVar1 * 0x3f + 0x7fU <= *(uint *)(DAT_027f97f0 + 0xd8)));
        iVar1 = iVar1 + 1) {
    }
    _DAT_04000006 = _DAT_04000006 + (1 - (short)iVar1);
    *(int *)(DAT_027f97f0 + 0xd8) = *(int *)(DAT_027f97f0 + 0xd8) + iVar1 * -0x3f;
  }
  return;
}

