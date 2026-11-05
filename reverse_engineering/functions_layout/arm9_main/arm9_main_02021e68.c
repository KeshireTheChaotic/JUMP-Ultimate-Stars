
/* JUS-CLASS ALWidgetBase_0209c1e0::~ALWidgetBase_0209c1e0 [class-source-file] slot 0/1 of vtable
   0209c1e0; resets vtables (destructor) */

undefined4 * ALWidgetBase_0209c1e0::~ALWidgetBase_0209c1e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_1 = &vftable;
  DAT_020a0cf8 = DAT_020a0cf8 + -1;
  (**(code **)(*(int *)param_1[0x14] + 0xc))();
  puVar3 = (undefined4 *)param_1[7];
  while (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + -8;
    puVar3 = (undefined4 *)*puVar3;
    (**(code **)(*piVar1 + 0xc))();
  }
  puVar3 = (undefined4 *)param_1[0x17];
  while (puVar3 != (undefined4 *)0x0) {
    piVar1 = puVar3 + -0x12;
    puVar3 = (undefined4 *)*puVar3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  piVar1 = (int *)param_1[0x19];
  if (piVar1 != DAT_020a0fec && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  ALObjectImp_020990e0::ALObjectImp_020990e0(param_1);
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

