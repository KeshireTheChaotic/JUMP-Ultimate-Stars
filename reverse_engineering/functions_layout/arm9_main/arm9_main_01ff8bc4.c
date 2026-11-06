
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK MIi_DmaSetParams_wait_noInt [behavioral] writes src/dest/control to DMA0SAD + 12*dmaNo,
   no interrupt guard, then reads back and applies the channel-0 workaround (dummy control
   0x81400001) */

undefined4
MIi_DmaSetParams_wait_noInt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  iVar1 = param_1 * 0xc;
  *(undefined4 *)(&DAT_040000b0 + iVar1) = param_2;
  *(undefined4 *)(&DAT_040000b4 + iVar1) = param_3;
  *(undefined4 *)(&DAT_040000b8 + iVar1) = param_4;
  if (param_1 == 0) {
    _DAT_040000b0 = 0;
    _DAT_040000b4 = 0;
    _DAT_040000b8 = 0x81400001;
  }
  return _DAT_040000b0;
}

