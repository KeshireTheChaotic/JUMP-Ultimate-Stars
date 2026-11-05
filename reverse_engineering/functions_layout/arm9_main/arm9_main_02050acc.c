
void FUN_02050acc(int *param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  lVar1 = (longlong)param_1[1] * (longlong)param_2[2];
  uVar10 = (uint)lVar1;
  lVar2 = (longlong)param_1[2] * (longlong)param_2[1];
  uVar7 = (uint)lVar2;
  uVar12 = uVar10 - uVar7;
  lVar3 = (longlong)param_1[2] * (longlong)*param_2;
  uVar11 = (uint)lVar3;
  lVar4 = (longlong)*param_1 * (longlong)param_2[2];
  uVar15 = (uint)lVar4;
  lVar5 = (longlong)*param_1 * (longlong)param_2[1];
  uVar8 = (uint)lVar5;
  lVar6 = (longlong)param_1[1] * (longlong)*param_2;
  uVar14 = (uint)lVar6;
  uVar13 = uVar11 - uVar15;
  uVar9 = uVar8 - uVar14;
  *param_3 = uVar12 + 0x800 >> 0xc |
             (((int)((ulonglong)lVar1 >> 0x20) -
              ((int)((ulonglong)lVar2 >> 0x20) + (uint)(uVar10 < uVar7))) +
             (uint)(0xfffff7ff < uVar12)) * 0x100000;
  param_3[1] = uVar13 + 0x800 >> 0xc |
               (((int)((ulonglong)lVar3 >> 0x20) -
                ((int)((ulonglong)lVar4 >> 0x20) + (uint)(uVar11 < uVar15))) +
               (uint)(0xfffff7ff < uVar13)) * 0x100000;
  param_3[2] = uVar9 + 0x800 >> 0xc |
               (((int)((ulonglong)lVar5 >> 0x20) -
                ((int)((ulonglong)lVar6 >> 0x20) + (uint)(uVar8 < uVar14))) +
               (uint)(0xfffff7ff < uVar9)) * 0x100000;
  return;
}

