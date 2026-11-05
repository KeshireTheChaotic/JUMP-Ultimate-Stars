
void FUN_02163200(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x78) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x80) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0xc4) + 4),1);
  func_0x021b65cc();
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

