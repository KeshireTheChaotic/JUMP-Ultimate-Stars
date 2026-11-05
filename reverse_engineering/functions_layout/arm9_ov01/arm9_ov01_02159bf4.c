
void FUN_02159bf4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x19c))();
  iVar4 = *(int *)(param_1 + 0x24);
  for (iVar1 = (*(int *)(*(int *)(*(int *)(param_1 + 0xac) + 4) + 0x148) - iVar1) * 3 + 5;
      iVar1 < 0x20; iVar1 = iVar1 + 3) {
    iVar3 = 0;
    do {
      piVar2 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar2 + 0x88))(piVar2,iVar3,iVar1,10,param_4);
      piVar2 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar2 + 0x88))(piVar2,iVar3,iVar1 + 1,10);
      piVar2 = *(int **)(*(int *)(iVar4 + 4) + 100);
      (**(code **)(*piVar2 + 0x88))(piVar2,iVar3,iVar1 + 2,10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x20);
  }
  return;
}

