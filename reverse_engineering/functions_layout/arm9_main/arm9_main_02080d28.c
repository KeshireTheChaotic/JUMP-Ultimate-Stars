
void FUN_02080d28(short *param_1,short *param_2,int param_3,int param_4,short param_5,short param_6,
                 int *param_7,int *param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int extraout_r1_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar5 = (param_3 + ((int)*param_1 - (int)param_1[2])) * 0x10000 >> 0x10;
  iVar8 = ((int)param_5 + ((int)*param_2 - (int)param_2[2])) * 0x10000 >> 0x10;
  iVar6 = (param_3 + (int)*param_1 + (int)param_1[2]) * 0x10000 >> 0x10;
  iVar7 = (param_4 + ((int)param_1[1] - (int)param_1[3])) * 0x10000 >> 0x10;
  iVar1 = ((int)param_6 + (int)param_2[1] + (int)param_2[3]) * 0x10000 >> 0x10;
  iVar2 = ((int)param_6 + ((int)param_2[1] - (int)param_2[3])) * 0x10000 >> 0x10;
  iVar3 = ((int)param_5 + (int)*param_2 + (int)param_2[2]) * 0x10000 >> 0x10;
  if (iVar5 <= iVar8) {
    iVar5 = iVar8;
  }
  if (iVar3 <= iVar6) {
    iVar6 = iVar3;
  }
  iVar8 = (param_4 + (int)param_1[1] + (int)param_1[3]) * 0x10000 >> 0x10;
  if (iVar7 <= iVar2) {
    iVar7 = iVar2;
  }
  if (iVar1 <= iVar8) {
    iVar8 = iVar1;
  }
  if (iVar5 == iVar6) {
    *param_7 = iVar5;
  }
  else {
    uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar4,iVar6 - iVar5);
    *param_7 = iVar5 + extraout_r1;
  }
  if (iVar7 == iVar8) {
    *param_8 = iVar7;
    return;
  }
  uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar4,iVar8 - iVar7);
  *param_8 = iVar7 + extraout_r1_00;
  return;
}

