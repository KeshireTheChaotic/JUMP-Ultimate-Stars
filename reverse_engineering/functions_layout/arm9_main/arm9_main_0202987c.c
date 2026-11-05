
/* JUS-CLASS jus_Class_02094538::jus_Class_02094538 [class-default] stores vtable 02094538 into
   *this (constructor) */

undefined4 * jus_Class_02094538::jus_Class_02094538(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  *(short *)(param_1 + 2) = (short)param_2;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  uVar1 = jus_AllocDebug(param_2 << 1);
  param_1[4] = uVar1;
  DAT_020a0d88 = DAT_020a0d88 + 1;
  return param_1;
}

