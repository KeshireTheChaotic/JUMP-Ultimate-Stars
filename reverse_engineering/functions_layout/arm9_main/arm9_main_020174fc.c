
/* JUS-CLASS jus_TagPAL8::vfunc_04 [class-virtual] slot 4 of vtable 02096e80 (own slot, not
   inherited) */

void jus_TagPAL8::vfunc_04(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  uVar1 = FUN_0201a228(param_2 * param_3);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}

