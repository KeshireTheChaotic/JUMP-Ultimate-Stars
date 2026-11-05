
void FUN_02159790(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_94 [64];
  undefined1 auStack_54 [64];
  
  uVar1 = FUN_0215716c();
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x194))();
  *(char *)(param_1 + 0x314) = (char)param_2;
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 0x198))(piVar3,0xffffffff);
  for (uVar7 = 0; iVar4 = *(int *)(*(int *)(param_1 + 0xac) + 4), uVar7 < *(uint *)(iVar4 + 0x164);
      uVar7 = uVar7 + 1) {
    FUN_02159a74(iVar4,uVar7);
    iVar4 = FUN_0214d37c();
    func_0x021b6214(*(undefined4 *)(iVar4 + 4),0);
    FUN_02159a74(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),uVar7);
    iVar4 = FUN_0214d37c();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    FUN_02159a74(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),uVar7);
    iVar4 = FUN_0214d37c();
    (**(code **)(**(int **)(iVar4 + 4) + 0x148))(*(int **)(iVar4 + 4),8);
  }
  FUN_02159ac4(param_1);
  iVar4 = *(int *)(param_1 + 0x304);
  if (iVar4 == 0) {
    if (*(char *)(param_1 + 0x310) == '\a') {
      for (uVar7 = 0; uVar7 < uVar1; uVar7 = uVar7 + 1) {
        if ((param_2 == 1) && ((int)*(char *)(param_1 + 0x312) == uVar7)) {
          FUN_02159d88(param_1,auStack_94,uVar7,0xc);
        }
        else {
          FUN_02159d88(param_1,auStack_94,uVar7,0);
        }
      }
      if (uVar1 < 0x32) {
        if (param_2 == 0) {
          FUN_02159d88(param_1,auStack_94,uVar1,0);
        }
        else {
          FUN_02159d88(param_1,auStack_94,uVar1,0xc);
        }
      }
    }
    else {
      for (uVar7 = 0; uVar7 < uVar1; uVar7 = uVar7 + 1) {
        uVar6 = FUN_021571a8(param_1,uVar7);
        FUN_020769cc(*(undefined4 *)(param_1 + 0x2d0),uVar6);
        uVar5 = FUN_0207879c(*(undefined4 *)(param_1 + 0x2d0));
        if ((uVar5 & 0x1f) == 0) {
          FUN_02159d88(param_1,auStack_94,uVar7,0);
        }
        else {
          FUN_02159d88(param_1,auStack_94,uVar7,0xc);
        }
      }
      FUN_02159aec(param_1);
    }
    FUN_0215f008(*(undefined4 *)(param_1 + 0x2f4),0);
    *(undefined1 *)(param_1 + 0x300) = 0;
    piVar3 = *(int **)(*(int *)(param_1 + 0x154) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  }
  else if (iVar4 == 1) {
    for (uVar7 = 0; uVar7 < uVar1; uVar7 = uVar7 + 1) {
      FUN_02159d88(param_1,auStack_54,uVar7,0);
    }
  }
  else if (iVar4 == 2) {
    for (uVar7 = 0; uVar7 < uVar1; uVar7 = uVar7 + 1) {
      FUN_02159db8(param_1,auStack_54,uVar7);
    }
    if ((*(char *)(param_1 + 0x310) == '\n') && (uVar1 != 0x32)) {
      FUN_02159db8(param_1,auStack_54,uVar1);
    }
  }
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 0xd8))(piVar3,1);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xac) + 4),1);
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  (**(code **)(*piVar3 + 400))();
  (**(code **)(*piVar3 + 0x178))();
  *(undefined1 *)(piVar3[0x19] + 0x40) = 1;
  FUN_02159bf4(param_1);
  iVar4 = FUN_02159a8c(*(undefined4 *)(param_1 + 0xac));
  (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),1);
  uVar6 = FUN_02159a8c(*(undefined4 *)(param_1 + 0xac));
  FUN_02159ab4(uVar6,0,0);
  piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
  uVar1 = piVar3[0x52];
  if (uVar1 == 0) {
    iVar4 = FUN_02159a8c();
    (**(code **)(**(int **)(iVar4 + 4) + 0xd8))(*(int **)(iVar4 + 4),0);
    uVar6 = FUN_02159a8c(*(undefined4 *)(param_1 + 0xac));
    FUN_02159ab4(uVar6,0xffffffff,0);
    piVar3 = *(int **)(*(int *)(param_1 + 0x5c) + 4);
    (**(code **)(*piVar3 + 0xd8))(piVar3,0);
    piVar3 = *(int **)(*(int *)(param_1 + 0xac) + 4);
    (**(code **)(*piVar3 + 0x198))(piVar3,0xffffffff);
  }
  else if (uVar2 == 0xffffffff) {
    (**(code **)(*piVar3 + 0x198))(piVar3,0);
  }
  else if (uVar2 < uVar1) {
    (**(code **)(*piVar3 + 0x198))(piVar3,uVar2);
  }
  else {
    (**(code **)(*piVar3 + 0x198))(piVar3,uVar1 - 1);
  }
  return;
}

