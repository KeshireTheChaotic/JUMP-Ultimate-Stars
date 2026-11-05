
/* JUS-CLASS jus_Class_0209674c::vfunc_08 [class-virtual] slot 8 of vtable 0209674c (own slot, not
   inherited) */

void jus_Class_0209674c::vfunc_08(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *unaff_r8;
  
  for (uVar2 = 0; uVar2 < *(uint *)(param_1 + 0x1c); uVar2 = uVar2 + 1) {
    puVar1 = (undefined4 *)(uVar2 * 0xc + *(int *)(param_1 + 0x18));
    if (*(char *)(puVar1 + 1) != '\0') {
      unaff_r8 = (code *)*puVar1;
    }
    if (*(char *)(puVar1 + 1) != '\0' && unaff_r8 != (code *)0x0) {
      if (puVar1[2] != 0) {
        FUN_02011ac8(puVar1[2]);
      }
      (*unaff_r8)();
    }
  }
  return;
}

