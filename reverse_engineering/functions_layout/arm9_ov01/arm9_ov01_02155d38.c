
void FUN_02155d38(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(int *)(iVar1 + 0x38) != 0) {
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar1 + 0x38) + 4));
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x38) + 4),1);
  }
  if (*(int *)(iVar1 + 0x30) != 0) {
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4),1);
  }
  return;
}

