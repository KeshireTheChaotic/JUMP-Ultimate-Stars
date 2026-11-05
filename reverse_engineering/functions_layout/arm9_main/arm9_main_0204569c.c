
/* JUS-CLASS jus_Class_02094118::vfunc_03 [class-virtual] slot 3 of vtable 02094118 (own slot, not
   inherited) */

void jus_Class_02094118::vfunc_03
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_0209dd40;
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x18); uVar3 = uVar3 + 1) {
    iVar2 = *(int *)(param_1 + 0x14) + uVar3 * 0xc;
    FUN_0205160c(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar3 * 0xc),
                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),param_4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

