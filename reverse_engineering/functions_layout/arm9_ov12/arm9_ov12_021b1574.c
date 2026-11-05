
/* JUS-CLASS ALObjectImp_021d253c::vfunc_24 [class-virtual] slot 24 of vtable 021d253c (own slot,
   not inherited) */

void ALObjectImp_021d253c::vfunc_24(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x48) != 0) {
      FUN_021b1850();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x20);
  return;
}

