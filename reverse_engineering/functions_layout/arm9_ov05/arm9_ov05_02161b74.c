
void FUN_02161b74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214fe4c(*(undefined4 *)(iVar3 + 0x18));
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar3 + 0x18) != 0) {
    uVar2 = FUN_02070684();
    FUN_021539e8(*(undefined4 *)(iVar3 + 0x18),uVar2);
    FUN_0214fa38(*(undefined4 *)(iVar3 + 0x18));
    *(undefined4 *)(iVar3 + 0x18) = 0;
  }
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  uVar2 = FUN_02070690();
  uVar2 = KomaEdit::KomaEdit_Create
                    (*(undefined4 *)(iVar3 + 0x10),uVar2,*(undefined1 *)(iVar3 + 0x4c),
                     *(undefined1 *)(iVar3 + 0x4d));
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  FUN_02159088(uVar2,FUN_021618b4,iVar3);
  FUN_0215a6a8(*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x14),0xfffffff0,0);
  *(undefined4 *)(iVar3 + 0x14) = 0;
  FUN_02073800();
  FUN_0207342c(0x78,6);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02161c48);
  return;
}

