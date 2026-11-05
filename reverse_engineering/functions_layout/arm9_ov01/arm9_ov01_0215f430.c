
void FUN_0215f430(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207974c(piVar2);
  iVar1 = *(int *)(*piVar2 + 0x558);
  piVar2[1] = iVar1;
  if (iVar1 == 0) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f73c);
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f480);
  return;
}

