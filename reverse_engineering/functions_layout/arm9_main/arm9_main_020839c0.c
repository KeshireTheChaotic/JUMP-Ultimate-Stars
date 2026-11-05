
void FUN_020839c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  *(int *)(param_1 + 8) = param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe0) = *(undefined4 *)(param_1 + 0x1c);
    pcVar2 = *(code **)(**(int **)(param_2 + 4) + 0x24);
    (*pcVar2)(*(int **)(param_2 + 4),*(undefined4 *)(param_1 + 0x14),pcVar2,param_4,param_4);
    FUN_0207a97c(*(undefined4 *)(param_1 + 0x14),param_2);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    func_0x021554d0(*(int *)(param_1 + 0x18),param_2);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return;
  }
  *(int *)(*(int *)(param_1 + 0x10) + 0x30) = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 8);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x60);
  if (iVar1 == 0) {
    return;
  }
  FUN_0207b33c(iVar1,param_2);
  return;
}

