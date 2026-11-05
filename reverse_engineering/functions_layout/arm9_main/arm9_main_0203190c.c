
/* JUS-CLASS ScreenInstance::ScreenInstance [class-instance-name] stores vtable 02093ea4 into *this
   (constructor) */

undefined4 * ScreenInstance::ScreenInstance(undefined4 *param_1)

{
  undefined4 uVar1;
  
                    /* JUS-TAG strings=["ScreenInstance"] */
  *param_1 = &vftable;
  uVar1 = (**(code **)*DAT_020a0e04)();
  param_1[1] = uVar1;
  FUN_0201ac08(param_1,s_ScreenInstance_0209d9e0);
  *(undefined4 **)(param_1[1] + 0x88) = param_1;
  return param_1;
}

