
void FUN_02150268(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20 [3];
  
  iVar5 = 0;
  bVar1 = *(byte *)(param_1 + 199);
  for (iVar3 = 0; iVar3 < (int)(uint)bVar1; iVar3 = iVar3 + 1) {
    local_20[iVar3] = *(int *)(param_1 + 0x14);
  }
  iVar3 = *(int *)(param_1 + 0x14);
  for (iVar2 = 0; iVar2 < iVar3; iVar2 = iVar2 + 1) {
    iVar6 = *(int *)(param_1 + iVar2 * 4 + 0x4c);
    iVar4 = local_20[(char)(&DAT_020afebe)[iVar2]];
    if (iVar6 <= local_20[(char)(&DAT_020afebe)[iVar2]]) {
      iVar4 = iVar6;
    }
    local_20[(char)(&DAT_020afebe)[iVar2]] = iVar4;
  }
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x14); iVar3 = iVar3 + 1) {
    iVar2 = param_1 + iVar3 * 4;
    (&DAT_020afee6)[iVar3] = (char)*(undefined4 *)(iVar2 + 0x4c);
    (&DAT_020afef2)[iVar3] = (short)*(undefined4 *)(iVar2 + 0x1c);
    (&DAT_020afefa)[iVar3] = 0;
    (&DAT_020aff02)[iVar3] = 0;
  }
  FUN_0214fa24(param_1);
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(param_1 + 199); iVar3 = iVar3 + 1) {
    if (local_20[iVar3] == 0) {
      iVar5 = iVar5 + 1;
    }
  }
  if (iVar5 < 2) {
    FUN_0214fcc8(param_1);
  }
  DAT_020afee5 = iVar5 < 2;
  return;
}

