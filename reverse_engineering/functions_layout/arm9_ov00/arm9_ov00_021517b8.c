
void FUN_021517b8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[0x410];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  iVar2 = param_1[0x423];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  iVar2 = param_1[0x424];
  if ((iVar2 != 0) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  if (param_1[4] != 0) {
    (**(code **)(**(int **)(param_1[4] + 4) + 0xc))();
  }
  if (param_1[5] != 0) {
    (**(code **)(**(int **)(param_1[5] + 4) + 0xc))();
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

