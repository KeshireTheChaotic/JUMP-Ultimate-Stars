
void FUN_021bc06c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1 + iVar2 * 4 + 4);
    if (iVar2 == param_2) {
      FUN_02028330(*(undefined4 *)(*piVar1 + 4));
    }
    else {
      FUN_0206af68(piVar1,0,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

