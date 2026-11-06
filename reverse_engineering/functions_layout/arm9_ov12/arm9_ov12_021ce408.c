
undefined4 FUN_021ce408(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if (DAT_021d57a0 == 3) {
    return 0;
  }
  if ((*(int *)(param_1 + 0xc) != 2) && (*(int *)(param_1 + 0xc) != 3)) {
    return 0;
  }
  uVar2 = 0;
  piVar1 = &DAT_021d57ac;
  do {
    if (*piVar1 == param_1) {
      return 1;
    }
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  uVar2 = 0;
  piVar1 = &DAT_021d57ac;
  do {
    if (*piVar1 == 0) {
      (&DAT_021d57ac)[uVar2] = param_1;
      break;
    }
    piVar1 = piVar1 + 1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  DAT_021d57a0 = DAT_021d57a0 + 1;
  DAT_021d5784 = DAT_021d5784 | *(uint *)(param_1 + 8);
  FUN_021cede4(&DAT_021d57b8 + uVar2 * 0x94,uVar2,*(undefined1 *)(param_1 + 5));
  FUN_021ce9f4(uVar2);
  if (*(int *)(param_1 + 0xc) != 2) {
    return 1;
  }
  if (DAT_021d57a0 == 1) {
    FUN_021cfac4();
    DAT_021d5780 = OS_GetTickLo();
    DAT_021d5790 = 0;
    DAT_021d5792 = 0;
    DAT_021d5794 = 1;
    DAT_021d6680 = 0;
    DAT_021d6684 = 0;
    DAT_021d668c = 0;
    DAT_021d6688 = 0;
    DAT_021d6690 = 0;
    DAT_021d6694 = 0;
  }
  return 1;
}

