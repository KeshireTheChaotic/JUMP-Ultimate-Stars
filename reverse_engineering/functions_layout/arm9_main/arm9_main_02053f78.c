
/* JUS-SDK DC_InvalidateAll [exact] instruction template DC_InvalidateAll */

undefined4 DC_InvalidateAll(void)

{
  coproc_moveto_Invalidate_Entire_Data_cache(0);
  return 0;
}

