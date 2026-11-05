
/* JUS-CLASS ALTextDS_021d4a2c::vfunc_24 [class-virtual] slot 24 of vtable 021d4a2c (own slot, not
   inherited) */

void ALTextDS_021d4a2c::vfunc_24(int param_1,int *param_2)

{
  undefined4 uVar1;
  
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 0xc))();
  }
  *(int **)(param_1 + 0x54) = param_2;
  (**(code **)(*param_2 + 8))();
  uVar1 = (**(code **)(*param_2 + 0x2c))();
  *(undefined4 *)(param_1 + 0xe8) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x30))();
  *(undefined4 *)(param_1 + 0xec) = uVar1;
  return;
}

