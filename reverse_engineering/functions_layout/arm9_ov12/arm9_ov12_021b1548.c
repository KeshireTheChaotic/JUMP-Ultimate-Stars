
/* JUS-CLASS ALObjectImp_021d253c::vfunc_05 [class-virtual] slot 5 of vtable 021d253c (own slot, not
   inherited) */

void ALObjectImp_021d253c::vfunc_05(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  iVar1 = jus_AllocDebug(8,s_ALCollision_cpp_021d25e0,s_CreateIntf_021d18e0,0xda9);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = ALCollision_021d1a80::ALCollision_021d1a80(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

