
void FUN_0214fc34(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_20 [3];
  
  iVar3 = 0;
  iVar2 = *(int *)(param_1 + 0x14);
  for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
    local_20[(char)(&DAT_020afebe)[iVar1]] = *(int *)(param_1 + iVar1 * 4 + 0x4c);
  }
  for (iVar1 = 0; iVar1 < *(int *)(param_1 + 0x14); iVar1 = iVar1 + 1) {
    iVar2 = param_1 + iVar1 * 4;
    (&DAT_020afee6)[iVar1] = (char)*(undefined4 *)(iVar2 + 0x4c);
    (&DAT_020afef2)[iVar1] = (short)*(undefined4 *)(iVar2 + 0x1c);
    (&DAT_020afefa)[iVar1] = (short)*(undefined4 *)(iVar2 + 0x2c);
    (&DAT_020aff02)[iVar1] = (short)*(undefined4 *)(iVar2 + 0x3c);
  }
  FUN_0214fa24(param_1);
  for (iVar1 = 0; iVar1 < (int)(uint)*(byte *)(param_1 + 199); iVar1 = iVar1 + 1) {
    if (local_20[iVar1] == 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (iVar3 < 2) {
    FUN_0214fcc8(param_1);
  }
  DAT_020afee5 = iVar3 < 2;
  return;
}

