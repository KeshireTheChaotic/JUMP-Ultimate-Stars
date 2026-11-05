
void FUN_0214f6e8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 9) != '\0') {
    return;
  }
  if ((*(char *)(iVar2 + 8) == '\0') || (iVar1 = func_0x0219b730(), iVar1 != 0)) {
    FUN_0214e1d4();
    FUN_021530bc();
    *(undefined2 *)(iVar2 + 10) = 0;
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f740);
    return;
  }
  return;
}

