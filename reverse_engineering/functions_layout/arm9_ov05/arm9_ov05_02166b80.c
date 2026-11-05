
void FUN_02166b80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b65cc();
  if (*(int *)(iVar2 + 0xc) != 0) {
    FUN_0214fe78();
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),&DAT_02166bc4);
  return;
}

