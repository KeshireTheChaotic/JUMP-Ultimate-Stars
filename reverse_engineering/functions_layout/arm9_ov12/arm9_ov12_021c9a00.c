
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_39 [class-virtual] slot 39 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_39
               (int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  ushort uVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [16];
  undefined4 *puStack_c;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  local_2c = *param_5;
  local_28 = *param_4;
  local_24 = *param_3;
  local_20 = *param_2;
  puStack_c = param_4;
  FUN_021c9a84(auStack_1c,&local_20,&local_24,&local_28,&local_2c);
  uVar1 = FUN_021c997c(auStack_1c);
  *(ushort *)(param_1 + 0x5c) = uVar1 & 0x7fff;
  (**(code **)(*param_1 + 0xa4))(param_1,0);
  return;
}

