
uint FUN_0207e148(int param_1,int param_2,int param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar7 = 0x7fffffff;
  iVar6 = 0;
  for (puVar10 = *(undefined4 **)(param_1 + 0x98); puVar10 != (undefined4 *)0x0;
      puVar10 = (undefined4 *)*puVar10) {
    iVar4 = puVar10[2];
    psVar5 = *(short **)(iVar4 + 0x70);
    sVar1 = psVar5[1];
    sVar2 = psVar5[3];
    iVar11 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xc);
    iVar12 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
    iVar9 = iVar11 + ((int)*psVar5 - (int)psVar5[2]) * 0x100;
    iVar11 = iVar11 + ((int)*psVar5 + (int)psVar5[2]) * 0x100;
    iVar8 = iVar12 + ((int)sVar1 - (int)sVar2) * 0x100;
    if ((((param_3 >> 8 <= iVar8 >> 8) && (iVar9 >> 8 < param_2 >> 8)) &&
        (param_2 >> 8 < iVar11 >> 8)) && (iVar8 < iVar7)) {
      *param_4 = iVar9;
      param_4[1] = iVar8;
      param_4[2] = iVar11 - iVar9;
      param_4[3] = (iVar12 + ((int)sVar1 + (int)sVar2) * 0x100) - iVar8;
      iVar6 = iVar4;
      iVar7 = iVar8;
    }
  }
  uVar3 = func_0x02162ad4(*(undefined4 *)(param_1 + 0xf8),param_2,param_3,&local_34);
  if ((short)uVar3 == -1) {
    uVar3 = 0xffffffff;
  }
  else if ((iVar6 == 0) || (local_30 <= iVar7)) {
    *param_4 = local_34;
    param_4[1] = local_30;
    param_4[2] = local_2c;
    param_4[3] = local_28;
  }
  else {
    uVar3 = *(ushort *)(iVar6 + 0xa0) | 0xc0000;
  }
  return uVar3;
}

