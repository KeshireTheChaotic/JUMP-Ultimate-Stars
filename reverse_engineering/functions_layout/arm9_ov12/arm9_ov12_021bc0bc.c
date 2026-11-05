
void FUN_021bc0bc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar3 = 0;
  if (param_2 == 0) {
    do {
      iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x20);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    local_18 = 0;
    local_14 = 0;
    FUN_021bb970(*(undefined4 *)(param_1 + 0x1c),&local_14,&local_18);
  }
  else {
    do {
      iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x20);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    piVar2 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  }
  return;
}

