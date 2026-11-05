
/* JUS-CLASS jus_Class_02098c48::vfunc_08 [class-virtual] slot 8 of vtable 02098c48 (own slot, not
   inherited) */

void jus_Class_02098c48::vfunc_08
               (undefined4 param_1,undefined4 param_2,undefined2 *param_3,undefined4 param_4)

{
  int local_18;
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_02024d44(&local_14);
  *param_3 = (short)((int)(local_14 + ((uint)(local_14 >> 0xb) >> 0x14)) >> 0xc);
  FUN_02024d54(&local_18,param_2);
  param_3[1] = (short)((int)(local_18 + ((uint)(local_18 >> 0xb) >> 0x14)) >> 0xc);
  return;
}

