
/* JUS-CLASS jus_Class_02096320::vfunc_07 [class-virtual] slot 7 of vtable 02096320 (own slot, not
   inherited) */

void jus_Class_02096320::vfunc_07
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [16];
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  uStack_28 = param_4;
  (**(code **)(*(int *)(param_1 + 0x14) + 0x3c))((int *)(param_1 + 0x14),param_1 + 0x3c);
  FUN_02019ebc(auStack_40);
  FUN_02019edc(auStack_40);
  local_30 = -*(int *)(param_1 + 0x40);
  local_2c = -*(int *)(param_1 + 0x44);
  uVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0x50) + 0x4c))();
  FUN_02019ebc(auStack_58);
  FUN_02019fb0(auStack_58,uVar1,auStack_40);
  local_60 = 0;
  local_5c = 0;
  local_68 = 0;
  local_64 = 0;
  if (*(int *)(param_1 + 0x20) != DAT_020a1054) {
    psVar2 = (short *)FUN_02036398(*(int *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x4c));
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    uVar3 = FUN_0200c954((int)psVar2[2]);
    uVar1 = FUN_0200c99c(uVar1);
    uVar1 = FUN_0200c5ac(uVar3,uVar1);
    FUN_0200c9e4(0x45800000,uVar1);
    local_60 = FUN_0200c8e0();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
    uVar3 = FUN_0200c954((int)psVar2[3]);
    uVar1 = FUN_0200c99c(uVar1);
    uVar1 = FUN_0200c5ac(uVar3,uVar1);
    FUN_0200c9e4(0x45800000,uVar1);
    local_5c = FUN_0200c8e0();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
    uVar3 = FUN_0200c954((int)*psVar2);
    uVar1 = FUN_0200c99c(uVar1);
    uVar1 = FUN_0200c5ac(uVar3,uVar1);
    FUN_0200c9e4(0x45800000,uVar1);
    local_68 = FUN_0200c8e0();
    uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x24))();
    uVar3 = FUN_0200c954((int)psVar2[1]);
    uVar1 = FUN_0200c99c(uVar1);
    uVar1 = FUN_0200c5ac(uVar3,uVar1);
    FUN_0200c9e4(0x45800000,uVar1);
    local_64 = FUN_0200c8e0();
  }
  uVar6 = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    for (; uVar6 < *(uint *)(param_1 + 0x70); uVar6 = uVar6 + 1) {
      piVar4 = *(int **)(*(int *)(param_1 + uVar6 * 4 + 0x50) + 4);
      (**(code **)(*piVar4 + 0x38))(piVar4,auStack_58);
      iVar7 = local_60;
      if (local_60 == 0x1000) {
        iVar7 = local_5c;
      }
      if (local_60 != 0x1000 || iVar7 != 0x1000) {
        piVar4 = *(int **)(*(int *)(param_1 + uVar6 * 4 + 0x50) + 4);
        (**(code **)(*piVar4 + 0x3c))(piVar4,&local_60,&local_68);
      }
      puVar5 = (undefined4 *)FUN_02032fe8();
      uVar1 = FUN_0200c99c(*(ushort *)(param_1 + 0x24) & 0x1f);
      uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
      FUN_0200c9e4(0x45800000,uVar1);
      uVar1 = FUN_0200c8e0();
      *puVar5 = uVar1;
      uVar1 = FUN_0200c99c((int)(uint)*(ushort *)(param_1 + 0x24) >> 5 & 0x1f);
      uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
      FUN_0200c9e4(0x45800000,uVar1);
      uVar1 = FUN_0200c8e0();
      puVar5[1] = uVar1;
      uVar1 = FUN_0200c99c((int)(uint)*(ushort *)(param_1 + 0x24) >> 10 & 0x1f);
      uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
      FUN_0200c9e4(0x45800000,uVar1);
      uVar1 = FUN_0200c8e0();
      puVar5[2] = uVar1;
      uVar1 = FUN_0200c99c(*(undefined2 *)(param_1 + 0x26));
      uVar1 = FUN_0200c5ac(uVar1,0x437f0000);
      FUN_0200c9e4(0x45800000,uVar1);
      uVar1 = FUN_0200c8e0();
      puVar5[3] = uVar1;
      piVar4 = *(int **)(*(int *)(param_1 + uVar6 * 4 + 0x50) + 4);
      (**(code **)(*piVar4 + 0x40))(piVar4,puVar5);
      iVar7 = *(int *)(param_1 + uVar6 * 4 + 0x50);
      uVar1 = (**(code **)(**(int **)(iVar7 + 4) + 0x78))();
      piVar4 = *(int **)(iVar7 + 4);
      (**(code **)(*piVar4 + 0x1c))(piVar4,uVar1);
    }
  }
  return;
}

