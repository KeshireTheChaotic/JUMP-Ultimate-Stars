
uint FUN_027e93b0(ushort *param_1)

{
  uint uVar1;
  
  if (((uint)param_1 & 1) == 0) {
    uVar1 = *param_1 & 0xff;
  }
  else {
    uVar1 = (int)(uint)*(ushort *)((int)param_1 + -1) >> 8;
  }
  return uVar1;
}

