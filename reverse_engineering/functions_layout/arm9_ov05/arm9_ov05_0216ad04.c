
void FUN_0216ad04(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_2 * 9;
  do {
    iVar1 = *(int *)(param_1 + iVar4 * 4 + 0x48);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x12);
  iVar4 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x48);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 9);
  FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0x90) + 4),param_2 + 0x810002,0);
  return;
}

