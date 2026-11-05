
void FUN_0203205c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  
  uStack_1c = param_4;
  FUN_0201a12c(param_1 + 0x10);
  FUN_0201a12c(param_1 + 0x28,param_2);
  iVar1 = FUN_02018228(param_1 + 0x54);
  uVar2 = FUN_02018228(param_1 + 0x54);
  FUN_02032030(&local_20,uVar2,param_1 + 0x10);
  *(int *)(param_1 + 0x38) = (local_20 + iVar1 * -0x1000) / 2;
  iVar1 = FUN_02018240(param_1 + 0x54);
  uVar2 = FUN_02018240(param_1 + 0x54);
  FUN_02032030(&local_24,uVar2,param_1 + 0x1c);
  *(int *)(param_1 + 0x3c) = (local_24 + iVar1 * -0x1000) / 2;
  *(undefined1 *)(param_1 + 0x40) = 1;
  FUN_02013a64(&local_28,param_1 + 0x38);
  uVar2 = FUN_0200c954(local_28);
  uVar2 = FUN_0200c5ac(uVar2,0x45800000);
  FUN_02013a64(&local_2c,param_1 + 0x3c);
  uVar3 = FUN_0200c954(local_2c);
  uVar3 = FUN_0200c5ac(uVar3,0x45800000);
  iVar1 = FUN_02018240(param_1 + 0x54);
  iVar4 = FUN_02018240(param_1 + 0x54);
  uVar5 = FUN_02018240(param_1 + 0x54);
  FUN_02032030(&local_44,uVar5,param_1 + 0x1c);
  FUN_0200c9e4(0x45800000,uVar3);
  iVar6 = FUN_0200c8e0();
  local_40 = local_44 + iVar4 * -0x1000 + iVar6 + iVar1 * 0x1000;
  iVar1 = FUN_02018228(param_1 + 0x54);
  iVar4 = FUN_02018228(param_1 + 0x54);
  uVar5 = FUN_02018228(param_1 + 0x54);
  FUN_02032030(&local_3c,uVar5,param_1 + 0x10);
  FUN_0200c9e4(0x45800000,uVar2);
  iVar6 = FUN_0200c8e0();
  local_38 = local_3c + iVar4 * -0x1000 + iVar6 + iVar1 * 0x1000;
  FUN_0200c9e4(0x45800000,uVar3);
  local_34 = FUN_0200c8e0();
  FUN_0200c9e4(0x45800000,uVar2);
  local_30 = FUN_0200c8e0();
  uVar2 = FUN_0202c040(&local_30);
  uVar3 = FUN_0202c040(&local_34);
  uVar5 = FUN_0202c040(&local_38);
  uVar7 = FUN_0202c040(&local_40);
  FUN_02032018(param_1 + 0x5c,uVar2,uVar3,uVar5,uVar7);
  return;
}

