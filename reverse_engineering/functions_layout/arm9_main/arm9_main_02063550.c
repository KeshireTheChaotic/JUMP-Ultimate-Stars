
int FUN_02063550(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x34);
  uVar2 = iVar3 * 8;
  if (*(uint *)(local_18 + 0x30) <= uVar2) {
    return 1;
  }
  local_14 = *(int *)(local_18 + 0x2c) + uVar2;
  iVar1 = FUN_02063af4(&local_18,&local_20,8);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x30) = local_20;
    *(undefined4 *)(param_1 + 0x34) = local_1c;
    *(int *)(param_1 + 0x38) = iVar3;
    iVar1 = FUN_020633d8(param_1,7);
  }
  return iVar1;
}

