
void FUN_0215babc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0215716c();
  if (iVar1 == 0) {
    FUN_02076c18(*(undefined4 *)(param_1 + 0x2cc));
    FUN_0207974c(*(undefined4 *)(param_1 + 0x2d4));
    FUN_0207907c(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2cc));
    return;
  }
  uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xac) + 4) + 0x194))();
  uVar2 = FUN_021571a8(param_1,uVar2);
  FUN_020769cc(*(undefined4 *)(param_1 + 0x2cc),uVar2);
  FUN_0207974c(*(undefined4 *)(param_1 + 0x2d4));
  FUN_0215f3f0(*(undefined4 *)(param_1 + 0x2d4),*(undefined4 *)(param_1 + 0x2cc));
  return;
}

