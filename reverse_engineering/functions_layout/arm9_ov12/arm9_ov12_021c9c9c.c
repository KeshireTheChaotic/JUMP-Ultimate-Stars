
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_35 [class-virtual] slot 35 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_35(int param_1,int param_2)

{
  uint uVar1;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uVar1 = param_2 + 7U & 0xfffffff8;
  if (*(uint *)(param_1 + 0x100) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x100) = uVar1;
  FUN_021c9b2c();
  return;
}

