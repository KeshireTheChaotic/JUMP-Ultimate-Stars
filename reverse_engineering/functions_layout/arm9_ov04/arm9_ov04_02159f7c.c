
void FUN_02159f7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02158fd4(*(undefined4 *)(iVar3 + 0xf0));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02158fe8(*(undefined4 *)(iVar3 + 0xf0));
  if (iVar1 == 0) {
    *(undefined2 *)(iVar3 + 0xe8) = 0;
    FUN_02159d78(iVar3);
    FUN_0207361c(7,0);
    return;
  }
  if (iVar1 == 1) {
    FUN_0214f5dc();
    JQuizCommonWork::JQuizCommonWork_Quiz_Shuffle_Core();
    FUN_021555e8(*(undefined4 *)(iVar3 + 0xc0),0);
    *(undefined2 *)(iVar3 + 0xe8) = 600;
    FUN_02159930(iVar3);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_021599a8);
    return;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_0214ce64();
    FUN_0214ce74(uVar2,1);
    FUN_021597bc(iVar3);
    return;
  }
  return;
}

