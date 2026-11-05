
/* JUS-CLASS ALWidgetBase_021d3620::ALWidgetBase_021d3620 [class-source-file] stores vtable 021d3620
   into *this (constructor) */

undefined4 * ALWidgetBase_021d3620::ALWidgetBase_021d3620(undefined4 *param_1)

{
  ALNodeImp::Create();
  *param_1 = &vftable;
  if (DAT_021d5164 != (undefined4 *)0x0) {
    FUN_020292e0(*DAT_021d5164,param_1,0xffffffff,0xffffffff);
  }
  return param_1;
}

