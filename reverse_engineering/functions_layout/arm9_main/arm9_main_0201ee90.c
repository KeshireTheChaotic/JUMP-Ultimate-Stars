
/* JUS-CLASS jus_Class_0209cac0::vfunc_55 [class-virtual] slot 55 of vtable 0209cac0 (own slot, not
   inherited) */

void jus_Class_0209cac0::vfunc_55(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  (**(code **)(*param_1 + 0xd0))();
  iVar1 = FUN_0201e6d4();
  for (uVar7 = 0; uVar7 < *(byte *)(iVar1 + 8); uVar7 = uVar7 + 1) {
    for (uVar8 = 0; uVar5 = (**(code **)(*(int *)param_1[7] + 0xac))(), uVar8 < uVar5;
        uVar8 = uVar8 + 1) {
      piVar2 = (int *)(**(code **)(*(int *)param_1[7] + 0xc0))((int *)param_1[7],uVar8);
      if (*(int *)(param_1[0x18] + uVar7 * 4) == 0) {
        uVar3 = (**(code **)(*param_1 + 0xd0))();
        uVar3 = FUN_02020514(uVar3,uVar7);
        iVar6 = param_1[0x19];
        uVar4 = FUN_020326b0();
        uVar3 = (**(code **)(*piVar2 + 0x40))(piVar2,uVar3,iVar6 + uVar7 * 4,uVar4);
        *(undefined4 *)(param_1[0x18] + uVar7 * 4) = uVar3;
      }
    }
  }
  return;
}

