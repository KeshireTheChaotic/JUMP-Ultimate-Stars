
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027e6260(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"IO_other":1} io=["04000006"] */
  iVar1 = DAT_027f97f0;
  if (*(ushort *)(DAT_027f97f0 + 0xdc) < 0x3c) {
    *(ushort *)(DAT_027f97f0 + 0xdc) = *(ushort *)(DAT_027f97f0 + 0xdc) + 1;
  }
  else if ((0xd0 < _DAT_04000006) && (_DAT_04000006 < 0xd4)) {
    *(undefined2 *)(DAT_027f97f0 + 0xdc) = 0;
  }
  FUN_027e6628();
  FUN_027e6680((int)*(short *)(iVar1 + 0x40),FUN_027e621c,5);
  return;
}

