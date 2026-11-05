
void FUN_020796c8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 == 0) {
    do {
      iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x14);
      if (iVar1 != 0) {
        piVar2 = *(int **)(iVar1 + 4);
        (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x14);
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x14);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x14);
  return;
}

