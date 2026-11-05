
/* JUS-CLASS PropBindInstance_02095200::PropBindInstance_02095200 [class-instance-name] stores
   vtable 02095200 into *this (constructor) */

undefined4 * PropBindInstance_02095200::PropBindInstance_02095200(undefined4 *param_1,int param_2)

{
                    /* JUS-TAG strings=["PropBindInstance"] */
  *param_1 = &jus_Class_02094268::vftable;
  *(undefined2 *)(param_1 + 1) = 1;
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  if (param_2 == 0) {
    param_2 = DAT_020a0c88;
  }
  param_1[3] = param_2;
  FUN_0202f914(param_1 + 4);
  param_1[7] = 0;
  FUN_0201ac08(param_1,s_PropBindInstance_0209d9cc);
  return param_1;
}

