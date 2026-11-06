
void FUN_02198380(int param_1)

{
  if (*(ushort *)(param_1 + 2) < 5) {
    (*(code *)((int)&switchD_0219839c::switchdataD_0219839e +
              (int)(short)(&switchD_0219839c::switchdataD_0219839e)[*(ushort *)(param_1 + 2)]))();
    return;
  }
  FUN_021988cc(0xb);
  FUN_02198974(7,0,0,0x76d);
  return;
}

