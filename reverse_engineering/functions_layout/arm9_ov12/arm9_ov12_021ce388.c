
void FUN_021ce388(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = &DAT_021d57ac;
  do {
    if (*piVar1 == param_1) {
      (&DAT_021d57ac)[uVar2] = 0;
      DAT_021d57a0 = DAT_021d57a0 + -1;
      FUN_021cedc8(&DAT_021d57b8 + uVar2 * 0x94);
      FUN_021ce9bc(uVar2);
      FUN_021ce6d8(uVar2);
      DAT_021d5784 = DAT_021d5784 & ~*(uint *)(param_1 + 8);
      break;
    }
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  if (DAT_021d57a0 == 0) {
    DAT_021d5794 = 1;
    FUN_021cfac4();
    DAT_021d5784 = 0;
  }
  return;
}

