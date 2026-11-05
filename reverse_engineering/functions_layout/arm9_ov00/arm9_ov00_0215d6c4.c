
void FUN_0215d6c4(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214f8e0(iVar2 + 0x6c);
  FUN_0214f8e0(iVar2 + 200);
  uVar1 = *(ushort *)(iVar2 + 0x1b6);
  *(ushort *)(iVar2 + 0x1b6) = uVar1 + 1;
  if (uVar1 < 0x79) {
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d740);
  FUN_02073f64(5,2,8);
  FUN_02073fa4(0xe,2,8);
  FUN_0214fa3c(iVar2 + 0x6c);
  FUN_0214fa3c(iVar2 + 200);
  return;
}

