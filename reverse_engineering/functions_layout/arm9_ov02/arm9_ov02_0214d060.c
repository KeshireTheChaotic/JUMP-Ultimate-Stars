
void FUN_0214d060(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0214e028(iVar3);
  if (iVar1 == 0) {
    return;
  }
  (*(code *)(&PTR_FUN_0215bd64)[*(byte *)(iVar3 + 0x56)])(*(undefined4 *)(iVar3 + 8));
  *(undefined4 *)(iVar3 + 8) = 0;
  (*(code *)(&PTR_FUN_0215bcf4)[*(byte *)(iVar3 + 0x57)])(iVar3);
  (*DAT_020a0e18)();
  (*DAT_020a0e18)();
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214d034);
  *(byte *)(iVar3 + 0x56) = *(byte *)(iVar3 + 0x57);
  uVar2 = (*(code *)(&PTR_JGalaxyPlanet_Create_0215bd10)[*(byte *)(iVar3 + 0x57)])(iVar3);
  *(undefined4 *)(iVar3 + 8) = uVar2;
  (*(code *)(&PTR_FUN_0215bd80)[*(byte *)(iVar3 + 0x56)])();
  return;
}

