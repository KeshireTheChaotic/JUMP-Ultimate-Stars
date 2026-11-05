
void FUN_02165a20(int param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 8) + 4) + 0x68) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  uVar3 = FUN_02054b44();
  *(undefined8 *)(iVar2 + 0x5c) = uVar3;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02165a7c);
  return;
}

