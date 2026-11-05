
void FUN_021b9040(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if ((*(uint *)(param_2 + 0xac) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 0x9c);
    FUN_021ae104(&local_14,*(undefined4 *)(param_2 + 0xb0));
  }
  else {
    iVar1 = *(int *)(param_2 + 0x9c);
    FUN_021b6f58(&local_18,*(undefined4 *)(param_2 + 0xb0));
    local_14 = local_18;
  }
  *param_1 = local_14 + iVar1 * -0x1000;
  return;
}

