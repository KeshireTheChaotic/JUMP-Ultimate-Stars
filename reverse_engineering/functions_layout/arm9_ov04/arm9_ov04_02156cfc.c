
void FUN_02156cfc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02156d8c(*(undefined4 *)(iVar2 + 4),0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    *(char *)(iVar2 + 0x17) = *(char *)(iVar2 + 0x17) + '\x01';
    return;
  }
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 4) + 4),3,0);
  }
  else {
    FUN_02023894(*(undefined4 *)(*(int *)(iVar2 + 4) + 4),2,0);
  }
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar2 + 4) + 4) + 0x68) + 0x6c))();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02156dc0);
  return;
}

