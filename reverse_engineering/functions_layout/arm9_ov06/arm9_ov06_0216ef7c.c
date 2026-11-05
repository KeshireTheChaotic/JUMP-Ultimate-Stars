
undefined4 FUN_0216ef7c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined1 uVar9;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  uStack_28 = param_4;
  iVar3 = FUN_0216e9d0(param_2);
  uVar9 = 1;
  if (iVar3 == 0) {
    FUN_02166a1c(&local_30,*(int *)(*(int *)(param_2 + 0x10) + 0x5c) + 0xc);
  }
  else {
    FUN_02166a1c(&local_30,*(int *)(*(int *)(iVar3 + 0x10) + 0x5c) + 0xc);
  }
  iVar3 = local_2c - *(int *)(iVar8 + 0x10) >> 8;
  iVar1 = local_30 - *(int *)(iVar8 + 0xc) >> 8;
  FUN_0200b850(iVar1 * iVar1 + iVar3 * iVar3);
  FUN_0200bb00();
  uVar4 = FUN_0200b6c4();
  FUN_0200c500(0x43000000,uVar4);
  if (!(bool)uVar9) {
    uVar5 = FUN_0200c954(*(undefined4 *)(iVar8 + 0xc));
    uVar6 = FUN_0200c954(iVar1 << 0xf);
    uVar6 = FUN_0200c5ac(uVar6,uVar4);
    FUN_0200bfb4(uVar5,uVar6);
    local_30 = FUN_0200c8e0();
    uVar5 = FUN_0200c954(*(undefined4 *)(iVar8 + 0x10));
    uVar6 = FUN_0200c954(iVar3 << 0xf);
    uVar4 = FUN_0200c5ac(uVar6,uVar4);
    FUN_0200bfb4(uVar5,uVar4);
    local_2c = FUN_0200c8e0();
  }
  *(int *)(param_3 + 4) = local_30 + *(int *)(param_3 + 0xc);
  *(int *)(param_3 + 8) = local_2c + *(int *)(param_3 + 0x10);
  *(undefined1 *)(param_3 + 0x1c) = 0;
  FUN_0216eef4(param_1,param_2,param_3);
  *(undefined2 *)(param_1 + 0x54) = 0;
  sVar2 = *(short *)(*(int *)(param_1 + 8) + 0x1e);
  if (sVar2 == 0) {
    pcVar7 = FUN_0216f398;
    *(undefined2 *)(param_1 + 0x56) = 0;
  }
  else {
    pcVar7 = FUN_0216f9d0;
    *(short *)(param_1 + 0x56) = sVar2;
  }
  *(code **)(param_1 + 0x50) = pcVar7;
  return 0;
}

