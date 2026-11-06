
void FUN_021987b4(int param_1)

{
  uint uVar1;
  
  if (((*(short *)(param_1 + 2) == 8) && (*(short *)(param_1 + 4) == 0x16)) &&
     (*(short *)(param_1 + 6) == 0x25)) {
    uVar1 = *(int *)(DAT_021aa094 + 0x2260) - 8;
    if (uVar1 < 5) {
      (*(code *)((int)&switchD_021987e4::switchdataD_021987e6 +
                (int)(short)(&switchD_021987e4::switchdataD_021987e6)[uVar1]))();
      return;
    }
  }
  return;
}

