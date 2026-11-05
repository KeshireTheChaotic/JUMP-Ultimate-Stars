
/* JUS-CLASS ALWidgetBase_021d3620::~ALWidgetBase_021d3620 [class-source-file] slot 0/1 of vtable
   021d3620; resets vtables (destructor) */

undefined4 * ALWidgetBase_021d3620::~ALWidgetBase_021d3620(undefined4 *param_1)

{
  *param_1 = &vftable;
  if (DAT_021d5164 != (undefined4 *)0x0) {
    FUN_02029500(*DAT_021d5164,param_1);
  }
  *param_1 = &CommonWindow::vftable;
  (**(code **)(*(int *)param_1[0x4e] + 0xc))();
  FUN_021b5088(param_1);
  return param_1;
}

