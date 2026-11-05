
void FUN_02155f74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_02073ebc(0x10,1,*(int *)(param_1 + 4),param_4,param_4);
  puVar1 = puRam0215607c;
  while (iVar2 = FUN_0207382c(), iVar2 == 0) {
    (*(code *)*puVar1)();
  }
  if (*(int *)(iVar4 + 0xd8) == 0) {
    FUN_02156258(iVar4);
    FUN_02156084(4);
    FUN_021560b4(iVar4);
  }
  else {
    FUN_02156200();
    FUN_02156084(4);
    uVar3 = DeckSelectPersonal::DeckSelect_PersonalCreate(1,1);
    *(undefined4 *)(iVar4 + 0xe4) = uVar3;
    uVar3 = FUN_0207216c(*(undefined1 *)(iRam02156080 + (*(uint *)(iVar4 + 0xf8) & 0xff)),
                         *(undefined1 *)
                          (*(uint *)(iVar4 + 0xf8) * 0x14 + iVar4 + *(int *)(iVar4 + 0xf4) + 0x178))
    ;
    FUN_0215effc(*(undefined4 *)(iVar4 + 0xe4),uVar3);
    FUN_0215f008(*(undefined4 *)(iVar4 + 0xe4),1);
    *(uint *)(iVar4 + 0xec) = *(uint *)(iVar4 + 0xec) | 0x10;
  }
  FUN_02073ebc(0xf,1);
  puVar1 = puRam0215607c;
  while (iVar2 = FUN_0207382c(), iVar2 == 0) {
    (*(code *)*puVar1)();
  }
  if (*(int *)(iVar4 + 0x38) == 0) {
    return;
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x38) + 4),1);
  return;
}

