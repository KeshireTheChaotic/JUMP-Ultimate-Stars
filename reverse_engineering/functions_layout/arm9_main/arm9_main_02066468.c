
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK G3X_InitMtxStack [behavioral] called by G3X_Init: acknowledges a stack error (GXSTAT bit
   15), identity on the texture/position matrices, pops both stacks to level 0 */

void G3X_InitMtxStack(void)

{
  int iVar1;
  undefined4 local_10;
  int local_c;
  
                    /* JUS-TAG hw={"GX_3D":4} io=["04000440","04000448","04000454","04000600"] */
  _DAT_04000600 = _DAT_04000600 | 0x8000;
  do {
    iVar1 = G3X_GetMtxStackLevelPV(&local_10);
  } while (iVar1 != 0);
  do {
    iVar1 = G3X_GetMtxStackLevelPJ(&local_c);
  } while (iVar1 != 0);
  _DAT_04000440 = 2;
  _DAT_04000448 = local_10;
  _DAT_04000454 = 0;
  return;
}

