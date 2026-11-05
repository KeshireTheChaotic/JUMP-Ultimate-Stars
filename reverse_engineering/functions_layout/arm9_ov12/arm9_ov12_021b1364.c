
/* JUS-CLASS ALCollisionImp::vfunc_05 [class-virtual] slot 5 of vtable 021d1c58 (own slot, not
   inherited) */

void ALCollisionImp::vfunc_05(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(0x10,s_ALCollision_cpp_021d25e0,s_CreateIntf_021d18d4,0x587,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    ALCollision_021d1a4c::ALCollision_021d1a4c(puVar1,param_1);
    *puVar1 = &jus_Class_021d1948::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

