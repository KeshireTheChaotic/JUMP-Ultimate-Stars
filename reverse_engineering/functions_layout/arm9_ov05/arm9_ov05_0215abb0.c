
void FUN_0215abb0(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = *(int **)(param_1 + 4);
  iVar6 = piVar2[4];
  iVar7 = piVar2[0x49];
  if (param_2 == 1) {
    FUN_0215b018(iVar6,iVar7,param_1);
    if (iVar7 == 0) {
      FUN_0215ae70(iVar6);
    }
  }
  else if (param_2 == 2) {
    uVar4 = (**(code **)(*piVar2 + 0x128))();
    if (((uVar4 & 3) == 3) && (FUN_0215b018(iVar6,iVar7,param_1), iVar7 == 0)) {
      FUN_0215ae70(iVar6);
    }
  }
  else if (param_2 == 4) {
    if (iVar7 == 0) {
      if (*(int *)(iVar6 + 0xc) == 0) {
        iVar7 = FUN_0215ae50(iVar6);
        if (iVar7 == 0) {
          func_0x021b65cc();
          FUN_0207342c(0x78,2);
        }
        else {
          FUN_0215c8f0(iVar6,1);
          FUN_0207342c(0x78,0);
        }
      }
      else {
        piVar2 = *(int **)(*(int *)(iVar6 + 0xf8) + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
        FUN_0215a83c(iVar6);
        FUN_0215aa08(iVar6,param_1,0x2a,1);
        (**(code **)(iVar6 + 0x208))(iVar6,*(undefined4 *)(iVar6 + 0x204),3,0,0);
        func_0x021b65cc();
        FUN_0207342c(0x78,0);
      }
      FUN_0215ae70(iVar6);
    }
    else {
      if (*(int *)(iVar6 + 0xc) == 0) {
        iVar5 = *(int *)(iVar6 + (iVar7 + -1) * 4 + 0x10);
        if (iVar5 == 0) {
          bVar1 = false;
        }
        else {
          FUN_0215a6a8(iVar6,iVar5,0xfffffff0,0);
          iVar7 = iVar6 + (iVar7 + -1) * 4;
          *(undefined4 *)(iVar7 + 0x10) = 0;
          (**(code **)(**(int **)(*(int *)(iVar7 + 0xfc) + 4) + 0xd8))();
          if (*(int *)(iVar6 + 0xc) != 0) {
            FUN_0215b0b4(*(undefined4 *)(iVar6 + 0xf8));
          }
          uVar3 = FUN_0215a9e0(param_1);
          FUN_021500cc(*(undefined4 *)(iVar6 + 0xf8),uVar3);
          FUN_0215aa08(iVar6,param_1,0x28,1);
          bVar1 = true;
        }
        if (!bVar1) {
          FUN_0207342c(0x78,2);
        }
      }
      else {
        iVar7 = iVar6 + (iVar7 + -1) * 4;
        if (*(int *)(iVar7 + 0x10) == 0) {
          *(int *)(iVar7 + 0x10) = *(int *)(iVar6 + 0xc);
          if (*(int *)(iVar6 + 0xc) != 0) {
            FUN_0215b0b4(*(undefined4 *)(iVar7 + 0xfc));
          }
          piVar2 = *(int **)(*(int *)(iVar6 + 0xf8) + 4);
          (**(code **)(*piVar2 + 0xd8))(piVar2,0);
          FUN_0215a83c(iVar6);
          FUN_0215aa08(iVar6,param_1,0x2a,1);
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) {
          FUN_0207342c(0x78,2);
        }
      }
      func_0x021b7170(*(undefined4 *)(param_1 + 4));
    }
  }
  return;
}

