
void FUN_02028f98(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int extraout_r1;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar6 = 0;
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x78)) {
    *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1U & 3;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x2c) =
       *(uint *)(param_1 + 0x2c) & *(uint *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x18);
  do {
    if ((*(uint *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x18) & 1 << (uVar6 & 0xff)) == 0) {
      *(undefined4 *)(param_1 + uVar6 * 4 + 0x30) = 0;
    }
    else {
      iVar4 = param_1 + uVar6 * 4;
      *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 1;
      if ((*(uint *)(param_1 + 0x2c) & 1 << (uVar6 & 0xff)) == 0) {
        if (*(uint *)(param_1 + 0x10) < *(uint *)(iVar4 + 0x30)) {
          *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1 << (uVar6 & 0xff);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << (uVar6 & 0xff);
        }
      }
      else {
        FUN_0200d338(*(int *)(iVar4 + 0x30) - *(int *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x14));
        if (extraout_r1 == 0) {
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 1 << (uVar6 & 0xff);
        }
      }
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 0x10);
  if ((*(int *)(param_1 + 0xd4) != 0) &&
     (((iVar4 = FUN_02029210(param_1), iVar4 != 0 || (iVar4 = FUN_02029234(param_1), iVar4 != 0)) ||
      (iVar4 = FUN_02029260(param_1), iVar4 != 0)))) {
    for (uVar6 = 0; uVar6 < *(uint *)(param_1 + 0xd4); uVar6 = uVar6 + 1) {
      puVar5 = (undefined4 *)(uVar6 * 0xc + *(int *)(param_1 + 0xd0));
      uVar1 = FUN_02029210(param_1);
      if ((*(ushort *)(puVar5 + 1) & uVar1) != 0) {
        uVar2 = FUN_02029210(param_1);
        uVar7 = *puVar5;
        iVar4 = FUN_0201a228(0x2c);
        uVar3 = 0;
        if (iVar4 != 0) {
          uVar3 = jus_Class_0209455c::jus_Class_0209455c(iVar4,0x80000000,0,uVar2,0,0);
        }
        FUN_02028644(uVar7,uVar3,0);
      }
      uVar1 = FUN_02029260(param_1);
      if ((*(ushort *)(puVar5 + 1) & uVar1) != 0) {
        uVar2 = FUN_02029260(param_1);
        uVar7 = *puVar5;
        iVar4 = FUN_0201a228(0x2c);
        uVar3 = 0;
        if (iVar4 != 0) {
          uVar3 = jus_Class_0209455c::jus_Class_0209455c(iVar4,0x80000001,0,uVar2,0,0);
        }
        FUN_02028644(uVar7,uVar3,0);
      }
      uVar1 = FUN_02029234(param_1);
      if ((*(ushort *)(puVar5 + 1) & uVar1) != 0) {
        uVar2 = FUN_02029234(param_1);
        uVar7 = *puVar5;
        iVar4 = FUN_0201a228(0x2c);
        uVar3 = 0;
        if (iVar4 != 0) {
          uVar3 = jus_Class_0209455c::jus_Class_0209455c(iVar4,0x80000002,0,uVar2,0,0);
        }
        FUN_02028644(uVar7,uVar3,0);
      }
    }
  }
  return;
}

