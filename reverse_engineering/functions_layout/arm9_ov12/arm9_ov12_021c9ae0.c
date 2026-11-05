
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_05 [class-virtual] slot 5 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_05(int param_1,int param_2)

{
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  FUN_02015184();
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    FUN_0203d764(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x1b0));
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  return;
}

