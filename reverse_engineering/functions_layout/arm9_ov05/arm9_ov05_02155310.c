
void FUN_02155310(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = *(int *)(param_2 + iVar2 * 4);
    if (iVar3 == 0) {
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x41c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    }
    else {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + iVar2 * 4 + 0x41c) + 4),
                   (char)(&DAT_0216d5dc)[*(char *)(iVar3 + 8)] + 0x810000 +
                   (int)*(char *)(iVar3 + 9),0);
      piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x41c) + 4);
      (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 6);
  return;
}

