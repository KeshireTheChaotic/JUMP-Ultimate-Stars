
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fe074(int param_1)

{
                    /* JUS-TAG hw={"IO_other":1} io=["04000004"] */
  FUN_037fbd04(4,FUN_037fddf0);
  _DAT_04000004 =
       _DAT_04000004 & 0x3f | (ushort)(((int)*(short *)(param_1 + 0x10) & 0xffU) << 8) |
       (ushort)((int)((int)*(short *)(param_1 + 0x10) & 0x100U) >> 1) | 0x20;
  FUN_037fbc4c(4);
  return;
}

