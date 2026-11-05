
void FUN_02159fa0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bad2c(*(undefined4 *)(iVar2 + 0x2d8));
  if (iVar1 != 0) {
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 4),1);
    FUN_020282f4(*(undefined4 *)(param_1 + 4));
  }
  return;
}

