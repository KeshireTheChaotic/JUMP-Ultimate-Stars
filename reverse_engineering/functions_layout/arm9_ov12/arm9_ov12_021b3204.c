
/* JUS-CLASS ALMotionDynamic_021d2618::vfunc_07 [class-virtual] slot 7 of vtable 021d2618 (own slot,
   not inherited) */

int ALMotionDynamic_021d2618::vfunc_07(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    param_1 = *(int *)(param_1 + 0x1c);
  }
  iVar1 = 1;
  while (param_1 = *(int *)(param_1 + 0x20), param_1 != 0) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

