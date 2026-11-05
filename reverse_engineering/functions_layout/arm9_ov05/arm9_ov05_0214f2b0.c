
void FUN_0214f2b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0215505c(*(undefined4 *)(iVar3 + 0x1c));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x1c) != 0) {
    FUN_02154ce4();
    *(undefined4 *)(iVar3 + 0x1c) = 0;
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  if (*(int *)(iVar3 + 0x28) == 0) {
    uVar2 = KomaHelp::KomaHelp_Create(0);
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
  }
  else if (*(int *)(iVar3 + 0x28) == 1) {
    uVar2 = KomaHelp::KomaHelp_Create(1);
    *(undefined4 *)(iVar3 + 0x10) = uVar2;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f34c);
  return;
}

