
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK CARDi_ReadRomIDCore [behavioral] card command 0xB8 (read chip ID), then reads one word
   from the card data port 0x04100010 */

undefined4 CARDi_ReadRomIDCore(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"IPC_PXI":1,"CARD":1}
                       io=["027ffe60","040001a4","04100010"] */
  CARDi_SetRomOp(0xb8000000,0);
  _DAT_040001a4 = _DAT_027ffe60 & 0xf8ffe000 | 0xa7000000;
  do {
  } while ((_DAT_027ffe60 & 0x800000) == 0);
  return _DAT_04100010;
}

