
void FUN_0214fcc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30 [7];
  
  local_30[6] = param_4;
  for (iVar4 = 0; iVar4 < (int)(uint)*(byte *)(param_1 + 199); iVar4 = iVar4 + 1) {
    local_30[iVar4 + 3] = *(int *)(param_1 + 0x14);
  }
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    iVar5 = *(int *)(param_1 + iVar4 * 4 + 0x4c);
    iVar3 = local_30[(char)(&DAT_020afebe)[iVar4] + 3];
    if (iVar5 <= local_30[(char)(&DAT_020afebe)[iVar4] + 3]) {
      iVar3 = iVar5;
    }
    local_30[(char)(&DAT_020afebe)[iVar4] + 3] = iVar3;
  }
  bVar1 = *(byte *)(param_1 + 199);
  for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
    local_30[iVar4] = 0;
    bVar2 = *(byte *)(param_1 + 199);
    for (iVar3 = 0; iVar3 < (int)(uint)bVar2; iVar3 = iVar3 + 1) {
      if ((iVar4 != iVar3) && (local_30[iVar3 + 3] < local_30[iVar4 + 3])) {
        local_30[iVar4] = local_30[iVar4] + 1;
      }
    }
  }
  for (iVar4 = 0; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    (&DAT_020afeea)[iVar4] = (char)local_30[(char)(&DAT_020afebe)[iVar4]];
  }
  return;
}

