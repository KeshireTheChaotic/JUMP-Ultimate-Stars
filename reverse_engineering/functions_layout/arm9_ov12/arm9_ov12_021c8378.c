
/* JUS-CLASS ALTextDS_021d4a2c::~ALTextDS_021d4a2c [class-source-file] slot 0/1 of vtable 021d4a2c;
   resets vtables (destructor) */

int * ALTextDS_021d4a2c::~ALTextDS_021d4a2c(int *param_1)

{
                    /* JUS-TAG source_file_inferred="ALTextDS.cpp" */
  *param_1 = (int)&vftable;
  (**(code **)(*param_1 + 0x18))(param_1,0);
  if ((int *)param_1[0x5f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5f] + 0xc))();
  }
  if ((int *)param_1[0x5e] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x5e] + 0xc))();
  }
  if (param_1[0x65] != 0) {
    FUN_0201b268();
  }
  ALTextImp_021d46e8::ALTextImp_021d46e8(param_1);
  FUN_0201b244(param_1);
  return param_1;
}

