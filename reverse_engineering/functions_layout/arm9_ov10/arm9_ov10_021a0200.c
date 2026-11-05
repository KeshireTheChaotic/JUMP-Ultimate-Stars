
/* JUS-CLASS WiFiGame::vfunc_07 [class-virtual] slot 7 of vtable 021a7298 (own slot, not inherited)
    */

undefined4 * WiFiGame::vfunc_07(undefined4 *param_1)

{
  *param_1 = &vftable;
  if ((param_1[8] != 0) && ((param_1[10] & 2) != 0)) {
    FUN_0201b268();
  }
  if ((param_1[9] != 0) && ((param_1[10] & 4) != 0)) {
    FUN_0201b268();
  }
  FUN_0201b244(param_1);
  return param_1;
}

