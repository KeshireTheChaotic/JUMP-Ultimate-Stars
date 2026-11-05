
/* JUS-CLASS PropBindInstance_02095200_Derived_02095140::~PropBindInstance_02095200_Derived_02095140
   [class-derived] slot 0/1 of vtable 02095140; resets vtables (destructor) */

undefined4 *
PropBindInstance_02095200_Derived_02095140::~PropBindInstance_02095200_Derived_02095140
          (undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &vftable;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  PropBindInstance_02095200::PropBindInstance_02095200(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

