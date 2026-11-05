
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03804f3c(void)

{
  int iVar1;
  
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  iVar1 = 0;
  DAT_0380a9b4 = 0;
  DAT_0380a9b8 = 0x14;
  DAT_0380a9bc = 0x14;
  do {
    (&DAT_0380a994)[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  iVar1 = FUN_037fe318();
  if (iVar1 == 0) {
    FUN_037fe328();
  }
  iVar1 = 0;
  do {
    FUN_037fe200(&DAT_0380a9c0 + iVar1 * 0x28);
    FUN_037fe048(&DAT_0380a9c0 + iVar1 * 0x28,0x54505641);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0x8201;
  _DAT_040001c2 = 0;
  return;
}

