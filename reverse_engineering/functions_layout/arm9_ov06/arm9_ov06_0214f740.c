
void FUN_0214f740(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((*(char *)(iVar2 + 8) != '\0') && (iVar1 = func_0x0219b730(), iVar1 == 0)) {
    FUN_02087f48(0);
    FUN_021530e4();
    FUN_0214e204();
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f6e8);
    return;
  }
  if (*(ushort *)(iVar2 + 10) < 0x3c) {
    *(ushort *)(iVar2 + 10) = *(ushort *)(iVar2 + 10) + 1;
    return;
  }
  FUN_02087f48(1);
  return;
}

