
/* JUS-CLASS PropBindInstance_020950e0::vfunc_15 [class-virtual] slot 15 of vtable 020950e0 (own
   slot, not inherited) */

void PropBindInstance_020950e0::vfunc_15
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_02030110(param_1 + 0x10,&uStack_c);
  FUN_02030110(param_1 + 0x28,param_1 + 0x1c);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  return;
}

