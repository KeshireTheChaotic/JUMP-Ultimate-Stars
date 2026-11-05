
int FUN_0205cbf8(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0205ea64(*param_1,*(undefined2 *)(param_1 + 3));
  if (iVar1 == 0) {
    return -1;
  }
  iVar1 = FUN_0205ca54(param_1);
  if (iVar1 == 0) {
    FUN_0205ea08(*param_1,0);
    return -1;
  }
  return *(ushort *)(param_1 + 3) - 1;
}

