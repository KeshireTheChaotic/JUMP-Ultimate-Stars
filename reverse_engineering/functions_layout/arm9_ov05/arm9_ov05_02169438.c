
void FUN_02169438(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  FUN_02152950(&local_18,*(undefined4 *)(iVar2 + 0x34));
  local_14 = local_18 + -0x2a000;
  FUN_02150a10(*(undefined4 *)(iVar2 + 0x34),&local_14);
  FUN_02152950(&local_1c,*(undefined4 *)(iVar2 + 0x34));
  if (local_1c < -0x100000) {
    local_20 = 0xfff00000;
    FUN_02150a10(*(undefined4 *)(iVar2 + 0x34),&local_20);
    piVar1 = *(int **)(*(int *)(iVar2 + 0x34) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    piVar1 = *(int **)(*(int *)(iVar2 + 0x3c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_02169b3c(iVar2,0);
    FUN_02028384(*(undefined4 *)(param_1 + 4),&LAB_021694f8);
  }
  FUN_02073840();
  return;
}

