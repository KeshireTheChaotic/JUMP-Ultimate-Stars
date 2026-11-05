
void FUN_02154c30(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    func_0x021b65cc();
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar2 + 8) + 4));
  }
  return;
}

