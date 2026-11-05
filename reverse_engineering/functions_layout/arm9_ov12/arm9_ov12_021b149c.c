
/* JUS-CLASS ALObjectImp_021d253c::ALObjectImp_021d253c [class-source-file] stores vtable 021d253c
   into *this (constructor) */

int * ALObjectImp_021d253c::ALObjectImp_021d253c
                (int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
                    /* JUS-TAG source_file_inferred="ALCollision.cpp" */
  local_10 = param_4;
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1,0);
  *param_1 = (int)&vftable;
  param_1[0x11] = param_2;
  param_1[0x32] = 0;
  local_10 = 0xb0000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_10);
  FUN_02027de8(param_1,1);
  MIi_CpuClear32(0,param_1 + 0x12,0x80);
  return param_1;
}

