
void FUN_0215445c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_02154418();
  *(undefined1 *)(param_1 + 0x542) = 0;
  for (iVar3 = 0; iVar3 < *(char *)(param_1 + 0x541); iVar3 = iVar3 + 1) {
    piVar2 = *(int **)(*(int *)(param_1 + iVar3 * 4 + 0x398) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    iVar1 = param_1 + iVar3 * 4;
    *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + 0xaa) = 0;
    *(undefined1 *)(*(int *)(*(int *)(iVar1 + 0xd0) + 4) + 0xab) = 0;
  }
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 0x3b8);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  return;
}

