
/* JUS-CLASS ALMotionDynamic_021d266c::vfunc_43 [class-virtual] slot 43 of vtable 021d266c (own
   slot, not inherited) */

void ALMotionDynamic_021d266c::vfunc_43(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfd | (param_2 & 1) << 1;
  *(byte *)(*(int *)(param_1 + 0x44) + 0x30) = param_2;
  return;
}

