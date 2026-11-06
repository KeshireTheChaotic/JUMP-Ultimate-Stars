
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK G3X_GetMtxStackLevelPJ [behavioral] -1 while GXSTAT bit 14 (stack busy) is set, else *out
   = GXSTAT bit 13 (projection stack level) */

undefined4 G3X_GetMtxStackLevelPJ(uint *param_1)

{
                    /* JUS-TAG hw={"GX_3D":1} io=["04000600"] */
  if ((_DAT_04000600 & 0x4000) == 0) {
    *param_1 = (_DAT_04000600 & 0x2000) >> 0xd;
    return 0;
  }
  return 0xffffffff;
}

