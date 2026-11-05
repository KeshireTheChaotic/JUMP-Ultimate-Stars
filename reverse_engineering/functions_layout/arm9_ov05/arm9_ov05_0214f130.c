
void FUN_0214f130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02159180(*(undefined4 *)(iVar4 + 0x18));
  if (iVar1 != 0) {
    if (*(int *)(iVar4 + 0x18) != 0) {
      uVar2 = FUN_02070690();
      FUN_0215b0fc(*(undefined4 *)(iVar4 + 0x18),uVar2);
      FUN_02159434(*(undefined4 *)(iVar4 + 0x18),iVar4 + 0x40,iVar4 + 0x41);
      FUN_02158e20(*(undefined4 *)(iVar4 + 0x18));
      uVar2 = FUN_02070690();
      FUN_02155310(*(undefined4 *)(iVar4 + 0x1c),uVar2);
      *(undefined4 *)(iVar4 + 0x18) = 0;
    }
    FUN_02073ef0(0xf,0);
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    uVar2 = FUN_02070684();
    uVar3 = FUN_02070690();
    uVar2 = KomaList::KomaList_Create
                      (0,*(undefined4 *)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x34),uVar2,uVar3,1);
    *(undefined4 *)(iVar4 + 0x14) = uVar2;
    FUN_0214fdb0(uVar2,FUN_0214e8e0,iVar4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f220);
  }
  return;
}

