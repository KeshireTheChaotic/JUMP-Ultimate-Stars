
void FUN_0207a658(int param_1,int *param_2,int *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  piVar3 = (int *)(**(code **)(*param_2 + 0xa0))();
  iVar6 = *piVar3;
  iVar4 = *param_4;
  iVar5 = *(int *)(param_1 + 0x10) + param_3[5] * 0x10;
  while (iVar6 < (int)((uint)*(ushort *)*param_4 * 0x1000)) {
    *param_4 = *param_4 + -10;
  }
  while (iVar7 = *param_4, (int)((uint)*(ushort *)(iVar7 + 10) * 0x1000) <= iVar6) {
    *param_4 = *param_4 + 10;
  }
  if ((iVar4 == iVar7) && ((*(byte *)(iVar5 + 0xf) & 0x7f) >> 6 != 0)) {
    return;
  }
  if ((*(byte *)(iVar5 + 0xf) & 0x7f) >> 6 != 0) {
    sVar1 = *(short *)(iVar5 + 4);
    sVar2 = *(short *)(iVar7 + 2);
    bVar8 = sVar1 == sVar2;
    if (bVar8) {
      sVar1 = *(short *)(iVar5 + 8);
      sVar2 = *(short *)(iVar7 + 6);
    }
    bVar9 = bVar8 && sVar1 == sVar2;
    if (bVar8 && sVar1 == sVar2) {
      bVar9 = *(short *)(iVar5 + 6) == *(short *)(iVar7 + 4);
    }
    bVar8 = false;
    if (bVar9) {
      bVar8 = *(short *)(iVar5 + 10) == *(short *)(iVar7 + 8);
    }
    if (bVar8) {
      return;
    }
  }
  (**(code **)(*param_3 + 0x24))(param_3,param_1,iVar7 + 2);
  return;
}

