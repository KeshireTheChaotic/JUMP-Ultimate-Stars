
void FUN_0215b740(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  
  for (uVar7 = 0; uVar5 = (**(code **)(**(int **)(param_1 + 4) + 0x16c))(), uVar7 < uVar5;
      uVar7 = uVar7 + 1) {
    pcVar6 = *(code **)(**(int **)(param_1 + 4) + 0x170);
    (*pcVar6)(*(int **)(param_1 + 4),uVar7,0x170,pcVar6,param_4);
    uVar1 = FUN_0215b570();
    iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x16c))();
    piVar3 = *(int **)(param_1 + 4);
    if (uVar7 == iVar2 - 1U) {
      (**(code **)(*piVar3 + 0x170))(piVar3,0);
      uVar4 = FUN_0215b570();
      FUN_0215b7fc(uVar1,uVar4);
    }
    else {
      (**(code **)(*piVar3 + 0x170))(piVar3,uVar7 + 1);
      uVar4 = FUN_0215b570();
      FUN_0215b7fc(uVar1,uVar4);
    }
    piVar3 = *(int **)(param_1 + 4);
    if (uVar7 == 0) {
      iVar2 = (**(code **)(*piVar3 + 0x16c))();
      (**(code **)(**(int **)(param_1 + 4) + 0x170))(*(int **)(param_1 + 4),iVar2 + -1);
      uVar4 = FUN_0215b570();
      FUN_0215b838(uVar1,uVar4);
    }
    else {
      (**(code **)(*piVar3 + 0x170))(piVar3,uVar7 - 1);
      uVar4 = FUN_0215b570();
      FUN_0215b838(uVar1,uVar4);
    }
  }
  return;
}

