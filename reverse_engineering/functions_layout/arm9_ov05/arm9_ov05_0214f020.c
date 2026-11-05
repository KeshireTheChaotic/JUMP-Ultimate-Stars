
void FUN_0214f020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214fe4c(*(undefined4 *)(iVar3 + 0x14));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x14) != 0) {
    uVar2 = FUN_02070684();
    FUN_021539e8(*(undefined4 *)(iVar3 + 0x14),uVar2);
    FUN_0214fa38(*(undefined4 *)(iVar3 + 0x14));
    *(undefined4 *)(iVar3 + 0x14) = 0;
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  uVar2 = FUN_02070690();
  uVar2 = KomaEdit::KomaEdit_Create
                    (*(undefined4 *)(iVar3 + 8),uVar2,*(undefined1 *)(iVar3 + 0x40),
                     *(undefined1 *)(iVar3 + 0x41));
  *(undefined4 *)(iVar3 + 0x18) = uVar2;
  FUN_02159088(uVar2,&LAB_0214ea0c,iVar3);
  FUN_0215a6a8(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0xc),0xfffffff0,0);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  FUN_02154f78(*(undefined4 *)(iVar3 + 0x1c));
  FUN_02073800();
  FUN_0207342c(0x78,6);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214f0fc);
  return;
}

