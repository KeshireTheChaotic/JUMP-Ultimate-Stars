
/* JUS-CLASS ALMotionDynamic_021d2618::vfunc_12 [class-virtual] slot 12 of vtable 021d2618 (own
   slot, not inherited) */

undefined4
ALMotionDynamic_021d2618::vfunc_12(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_18;
  
                    /* JUS-TAG source_file_inferred="ALMotionDynamic.cpp" */
  iVar1 = 0;
  local_18 = param_4;
  FUN_021b2898(&local_18,param_1 + 0x38);
  while( true ) {
    if (local_18 == param_1 + 0x3c) {
      return 0;
    }
    if (iVar1 == param_2) break;
    FUN_021b3700(&local_18);
    iVar1 = iVar1 + 1;
  }
  return *(undefined4 *)(*(int *)(local_18 + 0xc) + 0x54);
}

