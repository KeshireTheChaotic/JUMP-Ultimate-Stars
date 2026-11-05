
void FUN_02162378(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0208c220();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar3 + 0xa8) = 0xffffffff;
    FUN_0214d6bc(0);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02162464);
    return;
  }
  iVar1 = FUN_0208bce4();
  if (*(ushort *)(iVar3 + 0xa2) + 1 == iVar1) {
    *(undefined4 *)(iVar3 + 0xa8) = 1;
    thunk_FUN_0208a3dc();
    FUN_0208bf9c();
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02162424);
    return;
  }
  uVar2 = *(int *)(iVar3 + 0xac) + 1;
  *(uint *)(iVar3 + 0xac) = uVar2;
  if (uVar2 < 0x2d1) {
    return;
  }
  FUN_0214d724(9);
  *(undefined4 *)(iVar3 + 0xa8) = 0xfffffffe;
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02162464);
  return;
}

