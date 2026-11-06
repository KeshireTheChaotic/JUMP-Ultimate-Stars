
void FUN_02197ee4(int param_1)

{
  if (*(ushort *)(param_1 + 2) < 5) {
    (*(code *)((int)&switchD_02197efa::switchdataD_02197efc +
              (int)(short)(&switchD_02197efa::switchdataD_02197efc)[*(ushort *)(param_1 + 2)]))();
    return;
  }
  FUN_021988cc(0xb);
  FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x8d3);
  return;
}

