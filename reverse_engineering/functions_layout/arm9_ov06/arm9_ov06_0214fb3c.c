
void FUN_0214fb3c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_30 [7];
  
  local_30[6] = param_4;
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(param_1 + 199); iVar5 = iVar5 + 1) {
    local_30[iVar5 + 3] = 0;
  }
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
    local_30[(char)(&DAT_020afebe)[iVar5] + 3] =
         local_30[(char)(&DAT_020afebe)[iVar5] + 3] + *(int *)(param_1 + iVar5 * 4 + 0x1c);
  }
  bVar1 = *(byte *)(param_1 + 199);
  for (iVar5 = 0; iVar5 < (int)(uint)bVar1; iVar5 = iVar5 + 1) {
    local_30[iVar5] = 0;
    bVar2 = *(byte *)(param_1 + 199);
    for (iVar3 = 0; iVar3 < (int)(uint)bVar2; iVar3 = iVar3 + 1) {
      if ((iVar5 != iVar3) && (local_30[iVar5 + 3] < local_30[iVar3 + 3])) {
        local_30[iVar5] = local_30[iVar5] + 1;
      }
    }
  }
  for (iVar5 = 0; iVar5 < *(int *)(param_1 + 0x14); iVar5 = iVar5 + 1) {
    *(int *)(param_1 + iVar5 * 4 + 0x4c) = local_30[(char)(&DAT_020afebe)[iVar5]];
  }
  for (iVar5 = 0; iVar5 < (int)(uint)*(byte *)(param_1 + 199); iVar5 = iVar5 + 1) {
    iVar3 = param_1 + iVar5 * 4;
    iVar4 = *(int *)(iVar3 + 0x5c);
    if (iVar4 != *(int *)(iVar3 + 0x4c)) {
      if ((iVar4 == 0) && (*(byte *)(param_1 + iVar5 + 0xc0) < 0xfe)) {
        *(char *)(param_1 + iVar5 + 0xc0) = *(char *)(param_1 + iVar5 + 0xc0) + '\x01';
      }
      iVar3 = param_1 + iVar5 * 4;
      *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar3 + 0x4c);
    }
  }
  FUN_0214f998(param_1);
  return;
}

