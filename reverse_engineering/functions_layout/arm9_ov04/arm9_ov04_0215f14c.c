
void FUN_0215f14c(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = thunk_FUN_0208c51c();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0219b730();
  if (iVar1 == 0) {
    FUN_02031520(*(undefined4 *)(*piVar2 + 4));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215f100);
    return;
  }
  return;
}

