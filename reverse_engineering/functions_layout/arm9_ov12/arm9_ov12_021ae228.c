
void FUN_021ae228(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int local_18;
  
  iVar2 = param_1[0x4e];
  if (iVar2 != param_2) {
    iVar7 = param_1[0x52];
    param_1[0x4e] = param_2;
    bVar1 = false;
    while (*(short *)((int)param_1 + 0xce) != 0) {
      local_18 = param_1[0x5f] * (param_1[0x4e] + param_1[0x4f]) * 0x1000 - param_1[99];
      iVar3 = FUN_021ace7c(&local_18,(int)*(short *)((int)param_1 + 0xce));
      if (iVar3 == 0) break;
      iVar6 = param_1[99];
      iVar3 = param_1[0x5f];
      if ((uint)(iVar3 * iVar7 - (int)*(short *)((int)param_1 + 0xce)) <
          (uint)(iVar3 + ((int)(iVar6 + ((uint)(iVar6 >> 0xb) >> 0x14)) >> 0xc))) break;
      param_1[99] = iVar6 + iVar3 * 0x1000;
      bVar1 = true;
    }
    while( true ) {
      iVar3 = param_1[99];
      iVar7 = param_1[0x5f];
      bVar5 = false;
      if ((iVar7 * (param_1[0x4e] - param_1[0x4f]) * 0x1000 - iVar3 < 0) &&
         (-1 < iVar3 + iVar7 * -0x1000)) {
        bVar5 = true;
      }
      if (!bVar5) break;
      param_1[99] = iVar3 + iVar7 * -0x1000;
      bVar1 = true;
    }
    if (param_1[0x53] != 0) {
      uVar4 = FUN_021acab4(param_1);
      (*(code *)param_1[0x53])(uVar4,iVar2);
      if (param_1[0x4e] != param_2) {
        return;
      }
    }
    iVar2 = FUN_021ae354(param_1);
    if (iVar2 != 0) {
      uVar4 = FUN_021ae354(param_1);
      FUN_021b6214(uVar4,1);
    }
    if (bVar1) {
      *(undefined1 *)(param_1[0x19] + 0x40) = 1;
    }
    (**(code **)(*param_1 + 0x168))(param_1,0);
    (**(code **)(*param_1 + 0x178))();
  }
  return;
}

