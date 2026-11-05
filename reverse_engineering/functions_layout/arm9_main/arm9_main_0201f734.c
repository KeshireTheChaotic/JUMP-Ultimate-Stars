
/* JUS-CLASS jus_Class_0209cac0::vfunc_51 [class-virtual] slot 51 of vtable 0209cac0 (own slot, not
   inherited) */

void jus_Class_0209cac0::vfunc_51
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  (**(code **)(*param_1 + 0xd0))();
  iVar3 = FUN_0201e6d4();
  bVar1 = *(byte *)(iVar3 + 6);
  uVar5 = 0;
  if (bVar1 != 0) {
    do {
      iVar3 = *(int *)(param_1[0x17] + uVar5 * 4);
      if (iVar3 != 0) {
        if (*(char *)(*(int *)(iVar3 + 0x1c) + 0x29) < '\0') {
          *(undefined4 *)(param_1[0x17] + uVar5 * 4) = 0;
        }
        else {
          uVar2 = *(ushort *)(iVar3 + 0x52);
          uVar6 = 0;
          if (uVar2 != 0) {
            iVar7 = 0;
            do {
              iVar4 = *(int *)(iVar3 + 0x4c);
              iVar8 = iVar4 + uVar6 * 0x10;
              (**(code **)(iVar8 + 8))
                        (*(undefined4 *)(iVar4 + uVar6 * 0x10),param_1,*(undefined4 *)(iVar8 + 4),
                         iVar4 + iVar7 + 0xc,param_4);
              uVar6 = uVar6 + 1;
              iVar7 = iVar7 + 0x10;
            } while (uVar6 < uVar2);
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < bVar1);
  }
  *(byte *)((int)param_1 + 0x32) = *(byte *)((int)param_1 + 0x32) & 0xf7;
  return;
}

