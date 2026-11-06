
/* JUS-CLASS jus_Class_020940d0::vfunc_09 [class-virtual] slot 9 of vtable 020940d0 (own slot, not
   inherited) */

void jus_Class_020940d0::vfunc_09
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = DAT_0209dd40;
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0x18); uVar3 = uVar3 + 1) {
    iVar2 = *(int *)(param_1 + 0x14) + uVar3 * 0xc;
    MI_DmaCopy16(uVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + uVar3 * 0xc),
                 *(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),param_4);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}

