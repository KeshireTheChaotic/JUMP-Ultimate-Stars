
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_38 [class-virtual] slot 38 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_38(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  uVar1 = FUN_021c997c(param_2);
  *(ushort *)(param_1 + 0x5c) = uVar1 & 0x7fff;
  (**(code **)(*param_1 + 0xa4))(param_1,0);
  return;
}

