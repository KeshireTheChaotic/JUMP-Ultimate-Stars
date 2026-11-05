
void FUN_02161cb0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint extraout_r1;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_020869d0(*(undefined4 *)(iVar4 + 0x44));
  if (iVar1 == 0) {
    return;
  }
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x90) & 4;
  bVar5 = uVar2 == 4;
  uVar3 = extraout_r1;
  if (bVar5) {
    uVar3 = *(uint *)(iVar1 + 0x16c);
    uVar2 = uVar3 & *(uint *)(iVar1 + 0xbc);
  }
  if (bVar5 && uVar3 == uVar2) {
    return;
  }
  DAT_020afe9c = (uint)*(byte *)(iVar4 + *(char *)(iVar4 + 0xaf) + 0x88);
  FUN_02161e18(*(undefined1 *)(iVar4 + *(char *)(iVar4 + 0xaf) + 0x88));
  FUN_0207342c(0x78,0);
  FUN_02161d48(iVar4);
  return;
}

