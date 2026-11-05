
void FUN_02159d78(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0215432c(*(undefined4 *)(param_1 + 0xdc));
  FUN_02153b6c(*(undefined4 *)(param_1 + 0xd4),0);
  (*DAT_020a0e18)();
  FUN_02155790(*(undefined4 *)(param_1 + 0xc4),0);
  FUN_0214f968(600 - *(short *)(param_1 + 0xe8));
  FUN_0214f65c();
  iVar1 = FUN_0214f6a0();
  if (iVar1 != 0) {
    FUN_0215692c(*(undefined4 *)(param_1 + 200));
    FUN_0207367c(7);
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_02159ed0);
    return;
  }
  FUN_021555e8(*(undefined4 *)(param_1 + 0xc0),0);
  *(undefined2 *)(param_1 + 0xe8) = 600;
  FUN_02159930(param_1);
  iVar1 = FUN_0214f678();
  if (iVar1 == 0) {
    uVar2 = FUN_0214f5f4();
    FUN_021568b4(*(undefined4 *)(param_1 + 200),uVar2);
  }
  else {
    uVar2 = FUN_0214f5f4();
    FUN_021568f0(*(undefined4 *)(param_1 + 200),uVar2);
  }
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 4) + 4),FUN_021599f8);
  return;
}

