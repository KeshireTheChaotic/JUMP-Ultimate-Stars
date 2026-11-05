
void FUN_0215fe08(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar1 = *(int *)(param_1 + iVar3 * 4 + 4);
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar1 + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,0);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  return;
}

