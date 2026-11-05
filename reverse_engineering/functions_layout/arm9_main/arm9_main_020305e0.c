
/* JUS-CLASS PropBindInstance_020950e0::~PropBindInstance_020950e0 [class-instance-name] slot 0/1 of
   vtable 020950e0; resets vtables (destructor) */

undefined4 * PropBindInstance_020950e0::~PropBindInstance_020950e0(undefined4 *param_1)

{
  *param_1 = &vftable;
  (**(code **)(*(int *)param_1[9] + 0xc))();
  FUN_0200b254(param_1 + 10);
  PropBindInstance_02095200_Derived_02095140::PropBindInstance_02095200_Derived_02095140(param_1);
  return param_1;
}

