
void FUN_0215500c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar2 + 0x84) == '\0') {
    func_0x021b65cc();
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar2 + 4) + 4));
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215505c);
  return;
}

