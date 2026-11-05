
void FUN_02161968(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(iVar2 + 0x44) == 0) || (iVar1 = FUN_020869b8(), iVar1 == 0)) {
    func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x48) + 4));
  }
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

