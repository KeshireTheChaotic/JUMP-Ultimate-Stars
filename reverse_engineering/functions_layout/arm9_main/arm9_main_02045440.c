
/* JUS-CLASS jus_Class_02094118::jus_Class_02094118 [class-default] stores vtable 02094118 into
   *this (constructor) */

undefined4 *
jus_Class_02094118::jus_Class_02094118
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  *param_1 = &vftable;
  param_1[1] = param_2;
  param_1[2] = 0;
  uVar1 = jus_AllocDebug(param_4 * 0xc);
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = param_3;
  return param_1;
}

