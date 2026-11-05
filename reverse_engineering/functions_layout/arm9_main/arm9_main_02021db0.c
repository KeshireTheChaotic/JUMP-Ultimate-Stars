
/* JUS-CLASS ALWidgetBase_0209c1e0::~ALWidgetBase_0209c1e0 [class-source-file] slot 0/1 of vtable
   0209c1e0; resets vtables (destructor) */

undefined4 * ALWidgetBase_0209c1e0::~ALWidgetBase_0209c1e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  *param_1 = &vftable;
  DAT_020a0cf8 = DAT_020a0cf8 + -1;
  (**(code **)(*(int *)param_1[0x14] + 0xc))();
  puVar2 = (undefined4 *)param_1[7];
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + -8;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*piVar1 + 0xc))();
  }
  puVar2 = (undefined4 *)param_1[0x17];
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + -0x12;
    puVar2 = (undefined4 *)*puVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  piVar1 = (int *)param_1[0x19];
  if (piVar1 != DAT_020a0fec && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1);
  return param_1;
}

