
void FUN_0215fdcc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0215432c(*(undefined4 *)(param_1 + 0xe0));
  FUN_02153b6c(*(undefined4 *)(param_1 + 0xd8),0);
  FUN_0215ebc4(*(undefined4 *)(param_1 + 0xe4));
  (*DAT_020a0e18)();
  FUN_02155790(*(undefined4 *)(param_1 + 0xc4),0);
  FUN_0214f968(600 - *(short *)(param_1 + 0xf4));
  FUN_0214f65c();
  iVar1 = FUN_0214f6a0();
  if (iVar1 != 0) {
    FUN_0215692c(*(undefined4 *)(param_1 + 200));
    FUN_0207367c(7);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_02160210);
    return;
  }
  FUN_021555e8(*(undefined4 *)(param_1 + 0xc0),0);
  *(undefined2 *)(param_1 + 0xf4) = 600;
  FUN_0215f8ec(param_1);
  FUN_021584a4(*(undefined4 *)(param_1 + 0xd4));
  FUN_0215845c(*(undefined4 *)(param_1 + 0xd4));
  iVar1 = FUN_0214f678();
  if (iVar1 == 0) {
    uVar2 = FUN_0214f5f4();
    FUN_021568b4(*(undefined4 *)(param_1 + 200),uVar2);
  }
  else {
    uVar2 = FUN_0214f5f4();
    FUN_021568f0(*(undefined4 *)(param_1 + 200),uVar2);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_0215fa88);
  return;
}

