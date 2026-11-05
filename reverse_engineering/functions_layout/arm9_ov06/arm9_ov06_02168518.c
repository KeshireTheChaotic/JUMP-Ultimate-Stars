
void FUN_02168518(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (uint)*(byte *)(piVar2 + 9) * *piVar2;
  *(byte *)(piVar2 + 9) = *(byte *)(piVar2 + 9) - 1;
  iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 3) >> 0x1c)) >> 4;
  local_14 = iVar1;
  uStack_10 = param_4;
  FUN_02168488(piVar2[2],&local_14);
  if (iVar1 < 0x1001) {
    local_18 = 0x1000;
    FUN_02168488(piVar2[2],&local_18);
    FUN_02028384(*(undefined4 *)(piVar2[2] + 4),&DAT_02168410);
  }
  return;
}

