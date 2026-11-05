
void FUN_0201e1e4(undefined4 param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *local_20;
  
  local_20 = param_4;
  iVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_1);
  iVar1 = (iVar1 + 1U >> 1) + 1;
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 0xa0))();
  local_20 = (int *)*puVar2;
  while (iVar3 = FUN_02016314(&local_20,*(undefined2 *)*param_4), iVar3 != 0) {
    *param_4 = *param_4 + iVar1 * -2;
  }
  while (iVar3 = FUN_02016328(*(undefined2 *)(iVar1 * 2 + *param_4),&local_20), iVar3 != 0) {
    *param_4 = *param_4 + iVar1 * 2;
  }
  (**(code **)(*param_3 + 0x24))(param_3,param_1,*param_4 + 2);
  return;
}

