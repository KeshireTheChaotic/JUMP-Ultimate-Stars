
/* JUS-CLASS CommonWindow::~CommonWindow [class-source-file] slot 0/1 of vtable 021d37b8; resets
   vtables (destructor) */

undefined4 * CommonWindow::~CommonWindow(undefined4 *param_1)

{
  *param_1 = &vftable;
  (**(code **)(*(int *)param_1[0x4e] + 0xc))();
  FUN_021b5088(param_1);
  FUN_0201b244(param_1);
  return param_1;
}

