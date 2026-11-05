
/* JUS-CLASS ALWidgetBase_0209c1e0_Derived_0209c580::ALWidgetBase_0209c1e0_Derived_0209c580
   [class-derived] stores vtable 0209c580 into *this (constructor) */

undefined4 *
ALWidgetBase_0209c1e0_Derived_0209c580::ALWidgetBase_0209c1e0_Derived_0209c580(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  ALWidgetBase_0209c1e0::ALWidgetBase_0209c1e0(param_1,FUN_02021ff4,0);
  *param_1 = &vftable;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0xf;
  param_1[0x1d] = 4;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2a] = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    param_1[uVar1 + 0x22] = 0;
    uVar1 = uVar2;
  } while (uVar2 < 8);
  FUN_02027db0(param_1,DAT_020a0d84);
  return param_1;
}

