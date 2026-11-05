
/* JUS-CLASS jus_Class_0209674c::vfunc_16 [class-virtual] slot 16 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_16(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *unaff_r9;
  
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 0xa0); uVar3 = uVar3 + 1) {
    puVar2 = (undefined4 *)(uVar3 * 0xc + *(int *)(param_1 + 0x9c));
    if (*(char *)(puVar2 + 1) != '\0') {
      unaff_r9 = (code *)*puVar2;
    }
    if (*(char *)(puVar2 + 1) != '\0' && unaff_r9 != (code *)0x0) {
      uVar1 = param_2;
      if (puVar2[2] != 0) {
        uVar1 = FUN_02011ac8(puVar2[2]);
      }
      (*unaff_r9)(uVar1,param_3);
    }
  }
  return;
}

