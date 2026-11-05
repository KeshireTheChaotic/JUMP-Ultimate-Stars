
void FUN_0215454c(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    piVar1 = *(int **)(*(int *)(param_1 + iVar2 * 4 + 0x3c0) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

