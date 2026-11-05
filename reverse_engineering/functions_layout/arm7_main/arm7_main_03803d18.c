
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_03803d18(void)

{
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"IPC_PXI":1,"CARD":1}
                       io=["027ffe60","040001a4","04100010"] */
  FUN_03803d80(0xb8000000,0);
  _DAT_040001a4 = _DAT_027ffe60 & 0xf8ffe000 | 0xa7000000;
  do {
  } while ((_DAT_027ffe60 & 0x800000) == 0);
  return _DAT_04100010;
}

