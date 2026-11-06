
void FUN_02198144(int param_1)

{
  if (*(ushort *)(param_1 + 2) < 0xd) {
    (*(code *)((int)&switchD_0219815c::switchdataD_0219815e +
              (int)(short)(&switchD_0219815c::switchdataD_0219815e)[*(ushort *)(param_1 + 2)]))();
    return;
  }
  FUN_021988cc(0xb);
  FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x81b);
  return;
}

