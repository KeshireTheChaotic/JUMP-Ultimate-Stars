
void FUN_0214fa1c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_64 [8];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 auStack_54 [8];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [8];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar1 = FUN_0203b3f4();
  FUN_0214d614(*(undefined4 *)(iVar1 + 0x88));
  iVar1 = func_0x021caa0c(s_font_jskfont_aft_0215c0a0,0,0);
  iVar5 = 0;
  do {
    iVar2 = FUN_020152d4();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    local_28 = 0x50000;
    FUN_0214d650(iVar2,&local_28);
    iVar3 = FUN_0203b3f4();
    uVar4 = FUN_0214d53c(iVar5 + 0x12001,0x12000,*(undefined4 *)(iVar3 + 0x88),iVar2,0x50);
    local_2c = 0xce000;
    FUN_0214ef60(uVar4,&local_2c);
    FUN_0214edbc(auStack_34,0,0xfffffff4,0,8);
    func_0x021cb4d4(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4),iVar5 + 0xf080,auStack_34)
    ;
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
    iVar2 = FUN_020152d4();
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),1);
    local_38 = 0x50000;
    FUN_0214d650(iVar2,&local_38);
    iVar3 = FUN_0203b3f4();
    uVar4 = FUN_0214d53c(iVar5 + 0x12001,0x12000,*(undefined4 *)(iVar3 + 0x88),iVar2,0x50);
    local_3c = 0xdc000;
    FUN_0214ef60(uVar4,&local_3c);
    FUN_0214edbc(auStack_44,0,0xfffffff4,0,8);
    func_0x021cb4d4(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4),iVar5 + 0xf090,auStack_44)
    ;
    (**(code **)(**(int **)(iVar2 + 4) + 0xd8))(*(int **)(iVar2 + 4),0);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 10);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_48 = 0x50000;
  FUN_0214d650(iVar5,&local_48);
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_0214d53c(0x1200c,0x12000,*(undefined4 *)(iVar2 + 0x88),iVar5,0x50);
  local_4c = 0xd5000;
  FUN_0214ef60(uVar4,&local_4c);
  FUN_0214edbc(auStack_54,0,0xfffffff4,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar5 + 4),0xf190,auStack_54);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  iVar5 = FUN_020152d4();
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),1);
  local_58 = 0x50000;
  FUN_0214d650(iVar5,&local_58);
  iVar2 = FUN_0203b3f4();
  uVar4 = FUN_0214d53c(0x12014,0x12000,*(undefined4 *)(iVar2 + 0x88),iVar5,0x50);
  local_5c = 0xffff8000;
  FUN_0214ef60(uVar4,&local_5c);
  FUN_0214edbc(auStack_64,0,0xfffffff8,0,8);
  func_0x021cb4d4(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar5 + 4),0xf180,auStack_64);
  (**(code **)(**(int **)(iVar5 + 4) + 0xd8))(*(int **)(iVar5 + 4),0);
  FUN_0214ece8(iVar1);
  (**(code **)(**(int **)(iVar1 + 4) + 0xc))();
  FUN_0214d6e8();
  return;
}

