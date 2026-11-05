
void FUN_02031f30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  uStack_14 = param_4;
  FUN_02017004(param_1 + 0x54);
  if (*(char *)(param_1 + 0x40) == '\0') {
    FUN_02017004(param_1 + 0x5c,param_2);
  }
  else {
    iVar1 = FUN_02018240(param_1 + 0x54);
    iVar2 = FUN_02018240(param_1 + 0x54);
    uVar3 = FUN_02018240(param_1 + 0x54);
    FUN_02032030(&local_24,uVar3,param_1 + 0x1c);
    local_20 = local_24 + iVar2 * -0x1000 + iVar1 * 0x1000;
    iVar1 = FUN_02018228(param_1 + 0x54);
    iVar2 = FUN_02018228(param_1 + 0x54);
    uVar3 = FUN_02018228(param_1 + 0x54);
    FUN_02032030(&local_1c,uVar3,param_1 + 0x10);
    local_18 = local_1c + iVar2 * -0x1000 + iVar1 * 0x1000;
    uVar3 = FUN_0202c040(&local_18);
    uVar4 = FUN_0202c040(&local_20);
    FUN_02032018(param_1 + 0x5c,0,0,uVar3,uVar4);
  }
  return;
}

