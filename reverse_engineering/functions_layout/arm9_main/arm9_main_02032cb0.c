
void FUN_02032cb0(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_18;
  int *piStack_14;
  
  piStack_14 = param_4;
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 0xa0))();
  local_18 = *puVar1;
  while (iVar2 = FUN_02016314(&local_18,*(undefined2 *)*param_4), iVar2 != 0) {
    *param_4 = *param_4 + -4;
  }
  while (iVar2 = FUN_02016328(*(undefined2 *)(*param_4 + 4),&local_18), iVar2 != 0) {
    *param_4 = *param_4 + 4;
  }
  *(undefined2 *)(*(int *)(param_1 + 100) + 0x4a) = *(undefined2 *)(*param_4 + 2);
  return;
}

