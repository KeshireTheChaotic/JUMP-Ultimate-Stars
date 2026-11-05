
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205f98c(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_4c;
  int local_3c;
  
  local_4c = param_4 & 0xfffffff8;
  iVar5 = param_1[4];
  uVar6 = param_3 & 0xfffffff8;
  iVar1 = (int)((uint)*(byte *)(param_1 + 3) * 0x40) >> 3;
  local_3c = iVar1 * (((int)(local_4c + ((uint)((int)local_4c >> 2) >> 0x1d)) >> 3) * iVar5 +
                     ((int)(uVar6 + ((uint)((int)uVar6 >> 2) >> 0x1d)) >> 3)) + *param_1;
  uVar2 = param_4 + param_6 + 7 & 0xfffffff8;
  if ((int)uVar2 <= (int)local_4c) {
    return;
  }
  do {
    if ((int)local_4c < (int)param_4) {
      iVar9 = param_4 - local_4c;
    }
    else {
      iVar9 = 0;
    }
    iVar7 = local_3c;
    iVar4 = param_4 + param_6;
    for (uVar8 = uVar6; (int)uVar8 < (int)(param_3 + param_5 + 7 & 0xfffffff8); uVar8 = uVar8 + 8) {
      if ((int)uVar8 < (int)param_3) {
        iVar4 = param_3 - uVar8;
      }
      iVar3 = (param_3 + param_5) - uVar8;
      if ((int)param_3 <= (int)uVar8) {
        iVar4 = 0;
      }
      if (8 < iVar3) {
        iVar3 = 8;
      }
      FUN_020601d0(iVar7,iVar4,iVar9,iVar3 - iVar4);
      iVar7 = iVar7 + iVar1;
      iVar4 = extraout_r1;
    }
    local_3c = local_3c + iVar5 * iVar1;
    local_4c = local_4c + 8;
  } while ((int)local_4c < (int)uVar2);
  return;
}

