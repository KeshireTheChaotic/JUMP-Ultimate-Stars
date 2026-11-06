
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK G3X_ClearFifo [behavioral] GXi_NopClearFifo128_(GXFIFO), then waits while GXSTAT bit 27
   (geometry busy) is set */

void G3X_ClearFifo(void)

{
                    /* JUS-TAG hw={"GX_3D":1} io=["04000600"] */
  GXi_NopClearFifo128_(0x4000400);
  do {
  } while ((_DAT_04000600 & 0x8000000) != 0);
  return;
}

