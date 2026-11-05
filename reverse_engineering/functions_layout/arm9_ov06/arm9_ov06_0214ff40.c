
int FUN_0214ff40(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20 [3];
  
  iVar2 = 0;
  bVar1 = *(byte *)(param_1 + 199);
  for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
    local_20[iVar4] = *(int *)(param_1 + 0x14);
  }
  iVar4 = *(int *)(param_1 + 0x14);
  for (iVar3 = 0; iVar3 < iVar4; iVar3 = iVar3 + 1) {
    iVar6 = *(int *)(param_1 + iVar3 * 4 + 0x4c);
    iVar5 = local_20[(char)(&DAT_020afebe)[iVar3]];
    if (iVar6 <= local_20[(char)(&DAT_020afebe)[iVar3]]) {
      iVar5 = iVar6;
    }
    local_20[(char)(&DAT_020afebe)[iVar3]] = iVar5;
  }
  for (iVar4 = 0; iVar4 < (int)(uint)bVar1; iVar4 = iVar4 + 1) {
    if (local_20[iVar4] == 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

