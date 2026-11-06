
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK G3X_Init [behavioral] G3X_ClearFifo, END_VTXS = 0, waits for the geometry engine, resets
   DISP3DCNT/GXSTAT, then the stack and tables */

void G3X_Init(void)

{
                    /* JUS-TAG hw={"GX_3D":10,"GX_2D_main":3}
                       io=["04000008","04000010","04000060","04000350","04000354","04000356","04000358","0400035c","040004a4","040004a8","040004ac","04000504","04000600"]
                        */
  G3X_ClearFifo();
  _DAT_04000504 = 0;
  do {
  } while ((_DAT_04000600 & 0x8000000) != 0);
  _DAT_04000010 = 0;
  _DAT_04000060 = 0x10;
  _DAT_04000600 = 0x80008000;
  G3X_InitMtxStack();
  _DAT_04000350 = 0;
  _DAT_04000354 = 0x7fff;
  _DAT_04000356 = 0;
  _DAT_04000358 = 0;
  _DAT_0400035c = 0;
  _DAT_04000008 = _DAT_04000008 & 0xfffc;
  G3X_InitTable();
  _DAT_040004a4 = 0x1f0080;
  _DAT_040004a8 = 0;
  _DAT_040004ac = 0;
  return;
}

