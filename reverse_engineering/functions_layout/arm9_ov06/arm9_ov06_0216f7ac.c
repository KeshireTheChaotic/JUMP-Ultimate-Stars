
undefined4 FUN_0216f7ac(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  piVar5 = &local_20;
  uStack_18 = param_4;
  uVar2 = FUN_0216f398();
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
  uVar3 = FUN_0200c954((int)*(short *)(iVar6 + 0x24) << 0xc);
  uVar3 = FUN_0200c5ac(uVar3,0x45800000);
  uVar4 = FUN_0200c954((int)*(short *)(iVar6 + 0x26) << 0xc);
  FUN_0200c5ac(uVar4,0x45800000);
  uVar7 = FUN_0200c85c();
  uVar8 = FUN_0200c85c(uVar3);
  FUN_02009d2c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20)
              );
  uVar3 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar3);
  iVar6 = FUN_0200c8e0();
  uVar3 = FUN_0200c954((iVar6 * 0x10000) / 2);
  FUN_0200c5ac(uVar3,0x40490fdb);
  iVar6 = FUN_0200c8e0();
  if (iVar6 < 0) {
    local_20 = iVar6 + -0x7ff;
  }
  else {
    local_1c = iVar6 + 0x7ff;
    piVar5 = &local_1c;
  }
  uVar1 = (*piVar5 + ((uint)(*piVar5 >> 0xb) >> 0x14) & 0xfffffff) >> 0xc;
  iVar6 = FUN_02155c9c(*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8));
  if (iVar6 == 0) {
    FUN_02023738(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 4),uVar1);
  }
  else {
    FUN_02023738(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 8) + 4),uVar1 - 0x8000);
  }
  return uVar2;
}

