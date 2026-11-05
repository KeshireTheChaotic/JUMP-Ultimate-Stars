
undefined4 FUN_0201bdec(int *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  
  param_1[0xf] = param_1[0xe];
  *(short *)((int)param_1 + 0x2e) = (short)param_1[0xb];
  param_1[0xe] = param_1[0xe] + param_1[0xd];
  bVar1 = *(byte *)((int)param_1 + 0x32);
  *(byte *)((int)param_1 + 0x32) = bVar1 | 8;
  piVar4 = (int *)param_1[7];
  if ((bVar1 & 3) >> 1 == 0) {
    if ((param_1[0xd] < 1) ||
       (iVar3 = (**(code **)(*param_1 + 0x98))(), param_1[0xe] <= iVar3 * 0x1000)) {
      iVar3 = param_1[0xd];
      bVar5 = -1 < iVar3;
      if (!bVar5) {
        iVar3 = param_1[0xe];
      }
      if (bVar5 || -1 < iVar3) {
        return 1;
      }
    }
    (**(code **)(*param_1 + 0x70))();
    if (param_1[0xd] < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(*param_1 + 0x98))();
      iVar3 = iVar3 << 0xc;
    }
    param_1[0xe] = iVar3;
    (**(code **)(*piVar4 + 0x78))();
    iVar3 = FUN_0201bf90(piVar4);
    if (iVar3 == -1) {
      FUN_02028868(piVar4);
      return 0;
    }
  }
  else {
    if (0 < param_1[0xd]) {
      uVar2 = (**(code **)(*param_1 + 0x98))();
      iVar3 = FUN_02013a3c(param_1 + 0xe,uVar2);
      if (iVar3 != 0) {
        iVar3 = (**(code **)(*param_1 + 0x98))();
        iVar3 = param_1[0xe] + iVar3 * -0x1000;
        param_1[0xe] = iVar3;
        param_1[0xf] = iVar3;
        (**(code **)(*piVar4 + 0x78))();
        return 1;
      }
    }
    if ((param_1[0xd] < 0) && (param_1[0xe] < 1)) {
      iVar3 = (**(code **)(*param_1 + 0x98))();
      param_1[0xe] = param_1[0xe] + iVar3 * 0x1000;
      param_1[0xf] = 0;
      (**(code **)(*piVar4 + 0x78))();
    }
  }
  return 1;
}

