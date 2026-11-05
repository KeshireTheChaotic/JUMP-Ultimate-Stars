
void FUN_0204760c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_2c;
  int local_28;
  
  iVar7 = -999999;
  FUN_020379d8(&local_2c);
  for (uVar8 = 0; uVar8 < *(uint *)(param_1 + 0x9c); uVar8 = uVar8 + 1) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x98) + uVar8 * 4);
    iVar5 = *piVar1 * 0x1000 - local_28;
    iVar5 = (int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc;
    if ((iVar5 < 2) || (0xbf < iVar5)) {
      if (piVar1[6] != 0) {
        FUN_020472a0();
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar8 * 4) + 0x18) = 0;
      }
      if ((iVar5 < 2) && (iVar7 < iVar5)) {
        *param_2 = local_2c + *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar8 * 4) + 4);
        piVar1 = *(int **)(*(int *)(param_1 + 0x98) + uVar8 * 4);
        param_2[1] = local_28 + piVar1[2] + *piVar1 * -0x1000;
        iVar7 = iVar5;
      }
    }
    else {
      piVar1[3] = piVar1[1] + local_2c;
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x8e4) - 2U < 2) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x98) + uVar8 * 4);
        *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar3 + 8);
      }
      else {
        piVar1 = *(int **)(*(int *)(param_1 + 0x98) + uVar8 * 4);
        piVar1[4] = local_28 + piVar1[2] + *piVar1 * -0x1000;
      }
      FUN_020488c4(*(undefined4 *)(*(int *)(param_1 + 0x98) + uVar8 * 4));
      iVar3 = *(int *)(param_1 + 0x98);
      piVar1 = *(int **)(iVar3 + uVar8 * 4);
      iVar4 = piVar1[6];
      if (iVar4 == 0) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x908);
        if (iVar3 == 0) {
          uVar2 = FUN_020424ec(DAT_020a0f64,iVar5,piVar1 + 8,
                               *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x910),4);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar8 * 4) + 0x18) = uVar2;
        }
        else {
          uVar2 = FUN_020424ec(DAT_020a0f64,iVar5,piVar1 + 8,iVar3,0x10);
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x98) + uVar8 * 4) + 0x18) = uVar2;
        }
      }
      else if (iVar5 != *piVar1) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 0x908);
        if (iVar6 == 0) {
          FUN_020425ec(DAT_020a0f64,iVar4,iVar5,*(int *)(iVar3 + uVar8 * 4) + 0x20,
                       *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x910));
        }
        else {
          FUN_020425ec(DAT_020a0f64,iVar4,iVar5,*(int *)(iVar3 + uVar8 * 4) + 0x20,iVar6);
        }
      }
    }
  }
  return;
}

