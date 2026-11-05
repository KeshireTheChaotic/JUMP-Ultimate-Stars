
void FUN_0216de40(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int local_18;
  int local_14;
  
  piVar6 = &local_18;
  uVar3 = FUN_0200c954((int)*(short *)(param_1 + 0x38) << 0xc);
  uVar3 = FUN_0200c5ac(uVar3,0x45800000);
  uVar4 = FUN_0200c954((int)*(short *)(param_1 + 0x3a) << 0xc);
  FUN_0200c5ac(uVar4,0x45800000);
  uVar7 = FUN_0200c85c();
  uVar8 = FUN_0200c85c(uVar3);
  FUN_02009d2c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20)
              );
  uVar3 = FUN_0200b6c4();
  FUN_0200c9e4(0x45800000,uVar3);
  iVar5 = FUN_0200c8e0();
  uVar3 = FUN_0200c954((iVar5 * 0x10000) / 2);
  FUN_0200c5ac(uVar3,0x40490fdb);
  iVar5 = FUN_0200c8e0();
  if (iVar5 < 0) {
    local_18 = iVar5 + -0x7ff;
  }
  else {
    piVar6 = &local_14;
    local_14 = iVar5 + 0x7ff;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x2c) + 8);
  uVar1 = (*piVar6 + ((uint)(*piVar6 >> 0xb) >> 0x14) & 0xfffffff) >> 0xc;
  if (iVar5 == 0) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = *(char *)(*(int *)(*(int *)(iVar5 + 4) + 100) + 0x48);
  }
  if (cVar2 == '\0') {
    FUN_02023738(*(undefined4 *)(iVar5 + 4),uVar1);
  }
  else {
    FUN_02023738(*(undefined4 *)(iVar5 + 4),uVar1 - 0x8000);
  }
  return;
}

