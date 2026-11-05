
void FUN_02154014(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x250) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return;
}

