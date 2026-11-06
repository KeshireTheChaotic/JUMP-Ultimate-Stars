
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_SpiFlash_Read [behavioral] SPICNT 0x8100/0x8900 (device 1 = firmware flash), first
   SPIDATA byte = command 0x03 (Read) */

void jus_SpiFlash_Read(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  if (param_2 != 0) {
    do {
    } while ((_DAT_040001c0 & 0x80) != 0);
    _DAT_040001c0 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    for (uVar1 = 0; uVar1 < param_2 - 1U; uVar1 = uVar1 + 1) {
      do {
      } while ((_DAT_040001c0 & 0x80) != 0);
      *(undefined1 *)(param_3 + uVar1) = 0;
    }
    _DAT_040001c0 = 0x8100;
    _DAT_040001c2 = 0;
    *(undefined1 *)(param_3 + uVar1) = 0;
  }
  return;
}

