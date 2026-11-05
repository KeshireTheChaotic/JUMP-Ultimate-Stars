
void FUN_02154248(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar1 * 4 + 0x44);
    FUN_02023894(*(undefined4 *)(iVar2 + 4),param_2,0);
    (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}

