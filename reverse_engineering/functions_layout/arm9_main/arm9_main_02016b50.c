
void FUN_02016b50(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = (**(code **)(*param_2 + 0x60))();
  uVar1 = *(ushort *)(iVar2 + 8);
  iVar2 = (**(code **)(*param_1 + 100))();
  iVar6 = 0;
  if (iVar2 != 0) {
    for (; iVar6 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar6 = iVar6 + 1) {
      iVar2 = uVar1 - 1;
      for (iVar7 = 0; iVar7 < (int)(uint)*(ushort *)(param_1 + 2); iVar7 = iVar7 + 1) {
        iVar3 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
        iVar4 = iVar2;
        if (param_3 + iVar3 < iVar2) {
          iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
          iVar4 = param_3 + iVar4;
        }
        if ((-1 < iVar4) &&
           (iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6), param_3 + iVar4 < iVar2)) {
          (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
        }
        (**(code **)(*param_1 + 0x30))(param_1,iVar7,iVar6);
      }
    }
    uVar5 = (**(code **)(*param_2 + 0x60))();
    (**(code **)(*param_1 + 0x6c))(param_1,uVar5);
    return;
  }
  for (; iVar6 < (int)(uint)*(ushort *)((int)param_1 + 10); iVar6 = iVar6 + 1) {
    iVar2 = uVar1 - 1;
    for (iVar7 = 0; iVar7 < (int)(uint)*(ushort *)(param_1 + 2); iVar7 = iVar7 + 1) {
      iVar3 = (**(code **)(*param_2 + 0x2c))
                        (param_2,iVar7,iVar6,*(code **)(*param_2 + 0x2c),param_4);
      iVar4 = iVar2;
      if (param_3 + iVar3 < iVar2) {
        iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
        iVar4 = param_3 + iVar4;
      }
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar3 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
        iVar4 = iVar2;
        if (param_3 + iVar3 < iVar2) {
          iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,iVar7,iVar6);
          iVar4 = param_3 + iVar4;
        }
      }
      iVar3 = (**(code **)(*param_2 + 0x60))();
      (**(code **)(*param_1 + 0x28))
                (param_1,iVar7,iVar6,*(undefined2 *)(*(int *)(iVar3 + 0x10) + iVar4 * 2));
    }
  }
  return;
}

