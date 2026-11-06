
/* JUS-SDK MIi_DmaSetParams_noInt [behavioral] writes src/dest/control to DMA0SAD + 12*dmaNo, no
   interrupt guard */

void MIi_DmaSetParams_noInt(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
                    /* JUS-TAG hw={"DMA":3} io=["040000b0","040000b4","040000b8"] */
  param_1 = param_1 * 0xc;
  *(undefined4 *)(&DAT_040000b0 + param_1) = param_2;
  *(undefined4 *)(&DAT_040000b4 + param_1) = param_3;
  *(undefined4 *)(&DAT_040000b8 + param_1) = param_4;
  return;
}

