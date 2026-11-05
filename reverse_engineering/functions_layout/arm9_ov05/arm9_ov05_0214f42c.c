
void FUN_0214f42c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0215de50(*(undefined4 *)(iVar3 + 0x10));
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if (*(int *)(iVar3 + 0x28) == 0) {
    uVar1 = KomaState::KomaState_Create(*(undefined4 *)(iVar3 + 8),0,1);
    *(undefined4 *)(iVar3 + 0x1c) = uVar1;
    uVar1 = FUN_02070690();
    FUN_02155310(*(undefined4 *)(iVar3 + 0x1c),uVar1);
    FUN_0214fe9c(*(undefined4 *)(iVar3 + 0x14));
    uVar1 = FUN_0214fec8(*(undefined4 *)(iVar3 + 0x14));
    FUN_02155064(*(undefined4 *)(iVar3 + 0x1c),uVar1,0,1);
  }
  else if (*(int *)(iVar3 + 0x28) == 1) {
    uVar1 = KomaState::KomaState_Create(*(undefined4 *)(iVar3 + 8),1,1);
    *(undefined4 *)(iVar3 + 0x1c) = uVar1;
    uVar1 = FUN_02070690();
    FUN_02155310(*(undefined4 *)(iVar3 + 0x1c),uVar1);
    FUN_0215909c(*(undefined4 *)(iVar3 + 0x18));
    iVar2 = FUN_02159bb4(*(undefined4 *)(iVar3 + 0x18));
    if (iVar2 == 0) {
      uVar1 = FUN_02159bbc(*(undefined4 *)(iVar3 + 0x18));
      FUN_02155064(*(undefined4 *)(iVar3 + 0x1c),0,uVar1,1);
    }
    else {
      FUN_02155064(*(undefined4 *)(iVar3 + 0x1c),iVar2,0,0);
    }
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f544);
  return;
}

