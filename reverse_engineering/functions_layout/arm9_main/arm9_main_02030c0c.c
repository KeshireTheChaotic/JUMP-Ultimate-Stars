
/* JUS-CLASS PropBindInstance_020950e0::vfunc_19 [class-virtual] slot 19 of vtable 020950e0 (own
   slot, not inherited) */

void PropBindInstance_020950e0::vfunc_19(int param_1,undefined4 param_2)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  int *local_10;
  
  local_14 = *(undefined4 *)(param_1 + 0x10);
  FUN_020304dc(&local_10,&local_14,param_2);
  if ((int *)*local_10 != (int *)0x0) {
    (**(code **)(*(int *)*local_10 + 4))();
  }
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_020304dc(&local_1c,&local_20,param_2);
  FUN_020303a8(auStack_18,param_1 + 0x10,local_1c);
  *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  return;
}

