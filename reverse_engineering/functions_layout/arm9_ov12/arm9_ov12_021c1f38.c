
void FUN_021c1f38(int *param_1,int *param_2,int *param_3,uint *param_4,uint *param_5,
                 undefined4 *param_6,uint param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  
  iVar4 = 0;
  local_18 = 0;
  iVar5 = 0;
  local_14 = 0;
  uVar7 = 0;
  piVar3 = (int *)*param_6;
  iVar6 = 0;
  if (0 < (int)param_6[1]) {
    do {
      if (((*piVar3 != 0) || (param_8 == 0)) && ((piVar3[1] & param_7) != 0)) {
        uVar1 = (uint)*(ushort *)(piVar3 + 5);
        iVar5 = iVar5 + uVar1;
        uVar2 = (uint)*(ushort *)((int)piVar3 + 0x16);
        iVar4 = iVar4 + uVar2;
        local_18 = local_18 + 1;
        if (uVar7 < uVar1) {
          uVar7 = uVar1;
        }
        if (local_14 < uVar2) {
          local_14 = uVar2;
        }
      }
      iVar6 = iVar6 + 1;
      piVar3 = piVar3 + 6;
    } while (iVar6 < (int)param_6[1]);
  }
  *param_1 = iVar5;
  *param_2 = iVar4;
  *param_3 = local_18;
  *param_4 = uVar7;
  *param_5 = local_14;
  return;
}

