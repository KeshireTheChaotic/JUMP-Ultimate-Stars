
void FUN_02155890(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 uStack_10;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(iVar3 + 0x80) + 0x1b;
  *(int *)(iVar3 + 0x80) = iVar1;
  if (0x10000 < iVar1) {
    *(int *)(iVar3 + 0x80) = *(int *)(iVar3 + 0x80) + -0x10000;
  }
  uStack_10 = param_4;
  FUN_021559dc(&local_30,*(undefined4 *)(iVar3 + 0x80));
  uVar2 = FUN_0200c954(local_30);
  FUN_0200c5ac(uVar2,0x45800000);
  FUN_0200c85c();
  FUN_02009838();
  uVar2 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar2);
  local_28 = FUN_0200c8e0();
  FUN_021559bc(&local_24,100,&local_28);
  local_20 = local_24 + -0x60000;
  FUN_021559dc(&local_2c,*(undefined4 *)(iVar3 + 0x80));
  uVar2 = FUN_0200c954(local_2c);
  FUN_0200c5ac(uVar2,0x45800000);
  FUN_0200c85c();
  FUN_02009c54();
  uVar2 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar2);
  local_1c = FUN_0200c8e0();
  FUN_021559bc(&local_18,0xffffff9c,&local_1c);
  uVar2 = FUN_0200c954(local_18);
  FUN_0200c9e4(uVar2,0x3f19999a);
  local_14 = FUN_0200c8e0();
  local_14 = local_14 + -0x40000;
  FUN_0214f418(param_1,&local_14,&local_20);
  return;
}

