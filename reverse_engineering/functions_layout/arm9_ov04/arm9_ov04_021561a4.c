
void FUN_021561a4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02156014(iVar1);
  if (*(char *)(iVar1 + 0x19) == '\0') {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 8) + 4),1,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 8) + 4) + 0x68) + 0x6c))();
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215621c);
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021561a0);
  return;
}

