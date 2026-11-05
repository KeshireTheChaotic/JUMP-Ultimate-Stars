
void FUN_0214eba0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = 0;
  if (piVar3[9] == 1) {
    iVar1 = FUN_02070d14(0);
  }
  else if (*(char *)((int)piVar3 + 0x42) != '\0') {
    if (piVar3[8] == 0) {
      iVar2 = FUN_02071f20();
      if (iVar2 != -1) {
        iVar1 = FUN_02071f10();
      }
    }
    else {
      iVar1 = FUN_02071f10(DAT_020afeb4);
    }
    FUN_02070f38();
  }
  if (iVar1 != 0) {
    FUN_02076bbc(piVar3[2],iVar1);
  }
  if (*piVar3 != 0) {
    func_0x021bab64();
    *piVar3 = 0;
  }
  if (piVar3[6] != 0) {
    FUN_02158e20();
    piVar3[6] = 0;
  }
  if (piVar3[5] != 0) {
    FUN_0214fa38();
    piVar3[5] = 0;
  }
  if (piVar3[7] != 0) {
    FUN_02154ce4();
    piVar3[7] = 0;
  }
  FUN_0207698c(piVar3[2]);
  FUN_020763e0(piVar3[1]);
  FUN_020735e4();
  DAT_020a0e80 = *(undefined4 *)(&DAT_020a16c0 + DAT_02093c04 * 4);
  DAT_02093c04 = DAT_02093c04 + 1;
  DAT_020afcb8 = piVar3[8] & 0xffU | (piVar3[9] & 0xffU) << 8;
  (**(code **)(**(int **)(piVar3[0xb] + 4) + 0xc))();
  (**(code **)(*(int *)piVar3[0xc] + 8))();
  FUN_0201b244(piVar3);
  func_0x021b65cc();
  return;
}

