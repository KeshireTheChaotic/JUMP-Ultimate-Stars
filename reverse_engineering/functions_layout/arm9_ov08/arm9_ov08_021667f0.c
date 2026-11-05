
void FUN_021667f0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  DAT_0216e844 = FUN_02166ba8(0x798,4);
  uVar1 = FUN_02166120(0x20,DAT_0216e844 + 0x18,0x38);
  *(undefined4 *)(DAT_0216e844 + 0x788) = uVar1;
  iVar5 = 0;
  puVar3 = &DAT_0216c168;
  iVar2 = 0;
  iVar4 = 0;
  do {
    uVar1 = FUN_021658c4(*puVar3,0,4);
    *(undefined4 *)(DAT_0216e844 + iVar2 + 0x78c) = uVar1;
    FUN_0205eff4(DAT_0216e844 + iVar4,*(undefined4 *)(DAT_0216e844 + iVar2 + 0x78c));
    puVar3 = puVar3 + 1;
    iVar2 = iVar2 + 4;
    iVar4 = iVar4 + 0xc;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}

