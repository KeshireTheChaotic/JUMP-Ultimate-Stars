
/* JUS-CLASS ALCollision_02094f78::ALCollision_02094f78 [class-source-file] stores vtable 02094f78
   into *this (constructor) */

undefined4 * ALCollision_02094f78::ALCollision_02094f78(undefined4 *param_1,int param_2)

{
  undefined4 local_10;
  
  local_10 = 0x80000;
  jus_Class_02094370::jus_Class_02094370(param_1,&local_10);
  *param_1 = &vftable;
  param_1[4] = *(undefined4 *)(param_2 + 0x10);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = 0;
  (**(code **)(*(int *)param_1[5] + 8))();
  return param_1;
}

