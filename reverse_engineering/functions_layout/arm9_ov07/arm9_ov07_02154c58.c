
void FUN_02154c58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214f1bc(*(undefined4 *)(iVar4 + 0x28),0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  func_0x0219adf4(1);
  func_0x0219ae0c(4);
  uVar3 = 0;
  do {
    (*DAT_020a0e18)();
    uVar3 = uVar3 + 1;
  } while (uVar3 < 10);
  piVar2 = *(int **)(*(int *)(iVar4 + 0x34) + 4);
  (**(code **)(*piVar2 + 0x14c))(piVar2,8);
  FUN_020282f4(*(undefined4 *)(param_1 + 4));
  return;
}

