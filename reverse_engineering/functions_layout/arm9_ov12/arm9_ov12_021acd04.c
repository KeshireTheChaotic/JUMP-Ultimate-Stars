
void FUN_021acd04(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int local_18;
  
  iVar7 = param_1[0x4e];
  if (iVar7 != param_2) {
    iVar2 = (**(code **)(*param_1 + 0x19c))();
    param_1[0x4e] = param_2;
    bVar1 = false;
    while (*(short *)((int)param_1 + 0xce) != 0) {
      local_18 = (param_1[0x4e] + param_1[0x4f]) * *(int *)(*(int *)(param_1[0x58] + 100) + 0xe8) *
                 0x1000 - param_1[0x5d];
      iVar3 = FUN_021ace7c(&local_18);
      if (iVar3 == 0) break;
      iVar3 = param_1[0x5d];
      iVar6 = *(int *)(*(int *)(param_1[0x58] + 100) + 0xe8);
      if ((uint)(iVar6 * param_1[0x52] - (int)*(short *)((int)param_1 + 0xce)) <
          (uint)(((int)(iVar3 + ((uint)(iVar3 >> 0xb) >> 0x14)) >> 0xc) + iVar6)) break;
      param_1[0x5d] = iVar3 + iVar6 * 0x1000;
      bVar1 = true;
    }
    while( true ) {
      iVar3 = param_1[0x5d];
      iVar6 = *(int *)(*(int *)(param_1[0x58] + 100) + 0xe8);
      bVar5 = false;
      if ((iVar6 * (param_1[0x4e] - param_1[0x4f]) * 0x1000 - iVar3 < 0) &&
         (-1 < iVar3 + iVar6 * -0x1000)) {
        bVar5 = true;
      }
      if (!bVar5) break;
      param_1[0x5d] = iVar3 + iVar6 * -0x1000;
      bVar1 = true;
    }
    if (param_1[0x53] != 0) {
      uVar4 = FUN_021acab4(param_1);
      (*(code *)param_1[0x53])(uVar4,iVar7);
      if (param_1[0x4e] != param_2) {
        return;
      }
    }
    iVar3 = (**(code **)(*param_1 + 0x19c))();
    if ((iVar2 != iVar3) && (param_1[0x54] != 0)) {
      uVar4 = FUN_021acab4(param_1);
      (*(code *)param_1[0x54])(uVar4,iVar7);
      iVar7 = (**(code **)(*param_1 + 0x19c))();
      if (iVar3 != iVar7) {
        return;
      }
    }
    if (bVar1) {
      *(undefined1 *)(param_1[0x19] + 0x40) = 1;
    }
    (**(code **)(*param_1 + 0x168))(param_1,0);
    (**(code **)(*param_1 + 0x178))();
  }
  return;
}

