
void FUN_02164aec(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = 0;
    do {
      iVar1 = FUN_0216458c(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x104),iVar4,
                           iVar5,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0x108));
      iVar2 = *(int *)(iVar4 * 0xc + param_1 + iVar5 * 4 + 200);
      if (iVar1 == 0) {
        piVar3 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar3 + 0x148))(piVar3,8);
      }
      else {
        piVar3 = *(int **)(iVar2 + 4);
        (**(code **)(*piVar3 + 0x14c))(piVar3,8);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 5);
  return;
}

