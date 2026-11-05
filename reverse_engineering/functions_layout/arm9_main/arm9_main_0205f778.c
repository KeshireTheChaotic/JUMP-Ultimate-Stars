
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205f778(int *param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint local_64;
  
  bVar1 = *(byte *)(param_1 + 3);
  uVar3 = param_3 & 0xfffffff8;
  local_64 = param_4 & 0xfffffff8;
  uVar7 = param_4 + param_6 + 7 & 0xfffffff8;
  iVar9 = (int)(local_64 + ((uint)((int)local_64 >> 2) >> 0x1d)) >> 3;
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  iVar2 = *param_1;
  if ((int)uVar7 <= (int)local_64) {
    return;
  }
  do {
    if ((int)local_64 < (int)param_4) {
      iVar12 = param_4 - local_64;
    }
    else {
      iVar12 = 0;
    }
    iVar10 = (int)(uVar3 + ((uint)((int)uVar3 >> 2) >> 0x1d)) >> 3;
    for (uVar11 = uVar3; (int)uVar11 < (int)(param_3 + param_5 + 7 & 0xfffffff8);
        uVar11 = uVar11 + 8) {
      uVar13 = FUN_02060320(iVar10,iVar9,iVar4,iVar5);
      iVar6 = (int)((ulonglong)uVar13 >> 0x20);
      if ((int)uVar11 < (int)param_3) {
        iVar6 = param_3 - uVar11;
      }
      iVar8 = (param_3 + param_5) - uVar11;
      if ((int)param_3 <= (int)uVar11) {
        iVar6 = 0;
      }
      if (8 < iVar8) {
        iVar8 = 8;
      }
      FUN_020601d0(((int)((uint)bVar1 * 0x40) >> 3) * (int)uVar13 + iVar2,iVar6,iVar12,iVar8 - iVar6
                  );
      iVar10 = iVar10 + 1;
    }
    iVar9 = iVar9 + 1;
    local_64 = local_64 + 8;
  } while ((int)local_64 < (int)uVar7);
  return;
}

