
void FUN_0215ce7c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (iVar2 = 0; iVar2 < DAT_020afe90; iVar2 = iVar2 + 1) {
    iVar4 = iVar5 + iVar2 * 4;
    iVar3 = *(int *)(iVar4 + 0x24);
    iVar1 = FUN_020872b0(iVar2);
    if ((iVar3 != 0) && (iVar1 != *(int *)(iVar4 + 0x34))) {
      *(int *)(iVar4 + 0x34) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      }
      else if (iVar1 == 1) {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
        FUN_02023894(*(undefined4 *)(iVar3 + 4),0x810028,0);
        (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      }
      else if (iVar1 == 2) {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),1);
        FUN_02023894(*(undefined4 *)(iVar3 + 4),0x810029,0);
        (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
      }
      else {
        (**(code **)(**(int **)(iVar3 + 4) + 0xd8))(*(int **)(iVar3 + 4),0);
      }
    }
  }
  return;
}

