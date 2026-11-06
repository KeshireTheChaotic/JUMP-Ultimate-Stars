
void FUN_02198580(int param_1)

{
  int iVar1;
  
  if (*(ushort *)(param_1 + 2) < 5) {
    (*(code *)((int)&switchD_0219859a::switchdataD_0219859c +
              (int)(short)(&switchD_0219859a::switchdataD_0219859c)[*(ushort *)(param_1 + 2)]))
              (param_1,0x14);
    return;
  }
  FUN_021988cc(0xb);
  if (*(short *)(DAT_021aa094 + 0x2280) == 5) {
    iVar1 = DAT_021aa094 + 0x2140;
  }
  else {
    iVar1 = 0;
  }
  FUN_02198974(7,iVar1,0,0x6e8);
  return;
}

