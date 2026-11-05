
undefined4 FUN_021578dc(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  iVar1 = FUN_0203b3e4();
  uVar3 = *(undefined4 *)(iVar1 + 0x88);
  uVar2 = FUN_0207902c(*(undefined4 *)(param_1 + 0x3bc));
  uVar2 = ComicDeckMakeDisp::ComicDeck_DispKomaCreate(uVar3,uVar2);
  *(undefined4 *)(param_1 + 0x3c0) = uVar2;
  FUN_0214cf50(*(undefined4 *)(param_1 + 0x3c0),*(undefined4 *)(param_1 + 0x3b8),4,1,0x9f);
  uVar2 = FUN_0214ceb4(*(undefined4 *)(param_1 + 0x3c0));
  FUN_021500cc(uVar2,*param_2);
  local_1c = 0;
  local_18 = 0x8000;
  FUN_0214ce68(uVar2,&local_18,&local_1c);
  return 1;
}

