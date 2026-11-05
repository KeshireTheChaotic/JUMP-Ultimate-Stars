
void FUN_02155588(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    return;
  }
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 4);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
      FUN_02155654(*(undefined4 *)(param_1 + iVar3 * 4 + 4));
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x44);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x12);
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x8c);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  return;
}

