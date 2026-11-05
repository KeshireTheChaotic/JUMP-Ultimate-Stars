
void FUN_021672d4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  DAT_0216e870 = FUN_02166ba8(0x80c,4);
  MIi_CpuClearFast(0x200,DAT_0216e870,0x800);
  iVar4 = 0;
  iVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = FUN_02166120(0x40,DAT_0216e870 + iVar3,8);
    *(undefined4 *)(DAT_0216e870 + iVar2 + 0x800) = uVar1;
    iVar3 = iVar3 + 0x400;
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  uVar1 = FUN_02167814(1,0x216729d,0,200);
  *(undefined4 *)(DAT_0216e870 + 0x808) = uVar1;
  return;
}

