
void FUN_0215c400(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x68))();
  if (iVar1 == 0) {
    return;
  }
  *(undefined1 *)(iVar2 + 0x4ef) = 0;
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_021593c8);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  return;
}

