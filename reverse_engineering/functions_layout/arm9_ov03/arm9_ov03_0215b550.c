
void FUN_0215b550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    uVar2 = func_0x021ba49c(1,0,1);
    *(undefined4 *)(iVar4 + 8) = uVar2;
    iVar1 = FUN_0214fb7c(*(undefined4 *)(iVar4 + 4));
    uVar3 = (uint)*(byte *)(*(int *)(*(int *)(iVar1 + 4) + 0x10) + 0x21);
    if (3 < uVar3) {
      uVar3 = 3;
    }
    iVar5 = uVar3 * 0x18;
    iVar1 = (short)(ushort)*(byte *)(iVar4 + 2) * 0x60;
    func_0x021bac28(*(undefined4 *)(iVar4 + 8),1,*(undefined4 *)(iVar5 + iVar1 + 0x215d648),
                    *(undefined4 *)(iVar5 + iVar1 + 0x215d64c),
                    *(undefined4 *)(iVar5 + iVar1 + 0x215d650),
                    *(undefined4 *)(iVar5 + iVar1 + 0x215d654),
                    *(undefined4 *)(&DAT_0215d658 + iVar5 + iVar1),
                    *(undefined4 *)(&DAT_0215d65c + iVar5 + iVar1),param_4);
    FUN_02072870(0,*(undefined4 *)(iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60 + 0x215d648));
    FUN_02072870(1,*(undefined4 *)(iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60 + 0x215d64c));
    FUN_02072870(2,*(undefined4 *)(iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60 + 0x215d650));
    FUN_02072870(3,*(undefined4 *)(iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60 + 0x215d654));
    FUN_02072870(4,*(undefined4 *)(&DAT_0215d658 + iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60));
    FUN_02072870(5,*(undefined4 *)(&DAT_0215d65c + iVar5 + (uint)*(byte *)(iVar4 + 2) * 0x60));
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215b794);
  }
  return;
}

