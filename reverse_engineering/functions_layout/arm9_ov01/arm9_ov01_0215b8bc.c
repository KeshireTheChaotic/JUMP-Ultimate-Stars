
void FUN_0215b8bc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar6 = *(int *)(iVar7 + 0xac);
  uStack_18 = param_4;
  iVar1 = (**(code **)(**(int **)(iVar6 + 4) + 0x19c))();
  uVar2 = (**(code **)(**(int **)(iVar6 + 4) + 0x194))();
  iVar3 = (**(code **)(*param_2 + 8))();
  if ((iVar3 == -0x7ffef000) && (iVar3 = (**(code **)*param_2)(), iVar3 == 4)) {
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    iVar3 = (**(code **)(**(int **)(iVar6 + 4) + 0x194))();
    if (iVar3 != -1) {
      iVar1 = (uVar2 - iVar1) * 0x18 + 0x39;
      uVar4 = FUN_0215716c(iVar7);
      if (uVar2 < uVar4) {
        local_20 = iVar1 * 0x1000;
        FUN_0215b3f4(*(undefined4 *)(iVar7 + 0x4c),&local_20);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x4c) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        FUN_0215b874(iVar7,*(undefined4 *)(iVar7 + 0x68),iVar1);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x6c) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,0);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x68) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar7 + 0x68) + 4),1);
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar7 + 0x94) + 4),1);
        FUN_0215aaa0();
      }
      else {
        local_1c = iVar1 * 0x1000;
        FUN_0215b3f4(*(undefined4 *)(iVar7 + 0x50),&local_1c);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x50) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        FUN_0215b874(iVar7,*(undefined4 *)(iVar7 + 0x6c),iVar1);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x68) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,0);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x6c) + 4);
        (**(code **)(*piVar5 + 0xd8))(piVar5,1);
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar7 + 0x6c) + 4),1);
        piVar5 = *(int **)(*(int *)(iVar7 + 0x6c) + 4);
        (**(code **)(*piVar5 + 0x170))(piVar5,0);
        iVar1 = FUN_0215b570();
        func_0x021b6214(*(undefined4 *)(iVar1 + 4),1);
        FUN_0215aaa0();
      }
      FUN_0207342c(0x78,0);
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar7 + 0x8c) + 4));
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar7 + 0xac) + 4));
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar7 + 100) + 4));
    }
  }
  return;
}

