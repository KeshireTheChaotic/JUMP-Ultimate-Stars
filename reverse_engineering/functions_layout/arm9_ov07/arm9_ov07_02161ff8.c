
void FUN_02161ff8(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02026f94();
  *(int *)(param_1 + 4) = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_021621e4);
  FUN_02027834(*(undefined4 *)(*(int *)(param_1 + 4) + 4),8,FUN_021624ac);
  return;
}

