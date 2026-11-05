
void FUN_0215fa88(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0215696c(*(undefined4 *)(iVar4 + 200));
  if (iVar1 == 0) {
    return;
  }
  FUN_021532f4(*(undefined4 *)(iVar4 + 0xdc));
  uVar2 = FUN_0214f638();
  uVar3 = FUN_0215333c(*(undefined4 *)(iVar4 + 0xdc));
  FUN_021537a4(*(undefined4 *)(iVar4 + 0xd8),uVar2,uVar3);
  FUN_0215ef24(*(undefined4 *)(iVar4 + 0xfc));
  FUN_021542e0(*(undefined4 *)(iVar4 + 0xe0));
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215faf4);
  return;
}

