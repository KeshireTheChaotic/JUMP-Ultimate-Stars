
void FUN_02045fa0(int *param_1,undefined4 *param_2,int *param_3)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  uVar3 = FUN_02045bbc();
  iVar5 = param_1[4];
  uVar8 = (uint)((int)param_3 - iVar5) >> 2;
  (**(code **)*param_2)(param_2,uVar8 * param_1[6]);
  iVar6 = param_1[4] + uVar8 * 4;
  *(ushort *)(iVar6 + 2) = *(ushort *)(iVar6 + 2) & 0x7fff;
  iVar5 = param_1[4] + (uVar3 + ((uint)((int)param_3 - iVar5) >> 2) + -1) * 4;
  *(ushort *)(iVar5 + 2) = *(ushort *)(iVar5 + 2) & 0x7fff;
  param_2[2] = *(undefined4 *)(*param_1 + 8);
  param_2[1] = *param_1;
  *(undefined4 **)(param_2[2] + 4) = param_2;
  *(undefined4 **)(*param_1 + 8) = param_2;
  if (uVar3 == (*(ushort *)((int)param_3 + 2) & 0x7fff)) {
    piVar7 = (int *)param_1[5];
    if ((short)*piVar7 == 0x7fff) {
      param_1[5] = 0;
    }
    else if (piVar7 == param_3) {
      param_1[5] = param_1[4] + (short)*param_3 * 4;
    }
    else {
      while (uVar8 = (uint)(short)*piVar7,
            uVar8 != 0x7fff && uVar8 != (uint)((int)param_3 - param_1[4]) >> 2) {
        piVar7 = (int *)(param_1[4] + uVar8 * 4);
      }
      *(short *)piVar7 = (short)*param_3;
    }
  }
  else {
    psVar4 = (short *)(param_1[4] + (uVar3 + ((uint)((int)param_3 - param_1[4]) >> 2)) * 4);
    psVar4[1] = psVar4[1] | 0x8000;
    psVar4[1] = psVar4[1] & 0x8000U |
                (*(ushort *)((int)param_3 + 2) & 0x7fff) - (short)uVar3 & 0x7fff;
    piVar7 = (int *)param_1[5];
    if (piVar7 == (int *)0x0) {
      *psVar4 = 0x7fff;
      param_1[5] = (int)psVar4;
    }
    else if (piVar7 == param_3) {
      *psVar4 = (short)*piVar7;
      param_1[5] = (int)psVar4;
    }
    else {
      iVar5 = param_1[4];
      sVar2 = (short)*piVar7;
      while (uVar1 = (uint)sVar2, uVar1 != uVar8) {
        piVar7 = (int *)(iVar5 + uVar1 * 4);
        sVar2 = *(short *)(iVar5 + uVar1 * 4);
      }
      *(short *)piVar7 = (short)uVar3 + (short)((uint)((int)param_3 - iVar5) >> 2);
      *psVar4 = (short)*param_3;
    }
    uVar8 = (ushort)psVar4[1] & 0x7fff;
    uVar1 = (uint)((int)psVar4 - param_1[4]) >> 2;
    if (uVar8 != 1) {
      *(short *)(param_1[4] + (uVar1 + uVar8 + -1) * 4) = 1 - (short)uVar8;
    }
    iVar5 = param_1[4] + uVar1 * 4;
    *(ushort *)(iVar5 + 2) = *(ushort *)(iVar5 + 2) | 0x8000;
  }
  *param_3 = (int)param_2;
  param_1[3] = param_1[3] - uVar3;
  return;
}

