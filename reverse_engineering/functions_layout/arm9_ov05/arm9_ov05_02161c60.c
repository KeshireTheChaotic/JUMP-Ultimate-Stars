
void FUN_02161c60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_02159180(*(undefined4 *)(iVar4 + 0x1c));
  if (iVar1 != 0) {
    if (*(int *)(iVar4 + 0x1c) != 0) {
      uVar2 = FUN_02070690();
      FUN_0215b0fc(*(undefined4 *)(iVar4 + 0x1c),uVar2);
      FUN_02159434(*(undefined4 *)(iVar4 + 0x1c),iVar4 + 0x4c,iVar4 + 0x4d);
      FUN_02158e20(*(undefined4 *)(iVar4 + 0x1c));
      *(undefined4 *)(iVar4 + 0x1c) = 0;
    }
    FUN_02073ef0(0xf,0);
    (*DAT_020a0e18)();
    (*DAT_020a0e18)();
    uVar2 = FUN_02070684();
    uVar3 = FUN_02070690();
    uVar2 = KomaList::KomaList_Create
                      (0,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x40),uVar2,uVar3,1);
    *(undefined4 *)(iVar4 + 0x18) = uVar2;
    FUN_0214fdb0(uVar2,FUN_02161840,iVar4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02161d40);
  }
  return;
}

