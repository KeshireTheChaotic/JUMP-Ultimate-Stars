
void FUN_027e93d0(ushort *param_1,ushort param_2)

{
  if (((uint)param_1 & 1) == 0) {
    *param_1 = *param_1 & 0xff00 | param_2 & 0xff;
  }
  else {
    *(ushort *)((int)param_1 + -1) = *(ushort *)((int)param_1 + -1) & 0xff | param_2 << 8;
  }
  return;
}

