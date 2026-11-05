
void FUN_0207d94c(int param_1)

{
  int unaff_r4;
  
  if (param_1 != 0) {
    unaff_r4 = *(int *)(param_1 + 0x28);
  }
  if (param_1 != 0 && unaff_r4 != 0) {
    if ((*(uint *)(unaff_r4 + 0x40) & 0x100) == 0) {
      *(uint *)(unaff_r4 + 0x40) = *(uint *)(unaff_r4 + 0x40) | 0x100;
      FUN_02037c24(DAT_0214be10,unaff_r4);
      FUN_02037b98(DAT_0214be10 + 0x10,unaff_r4);
      return;
    }
    return;
  }
  return;
}

