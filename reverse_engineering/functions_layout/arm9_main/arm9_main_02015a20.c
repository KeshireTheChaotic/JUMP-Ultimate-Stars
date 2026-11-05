
/* JUS-CLASS jus_Class_02093ff0::vfunc_02 [class-virtual] slot 2 of vtable 02093ff0 (own slot, not
   inherited) */

undefined4 * jus_Class_02093ff0::vfunc_02(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  uVar2 = param_1[2];
  iVar1 = FUN_0201a9ec(uVar2);
  if (iVar1 == 0) {
    FUN_0201a958(uVar2,1);
  }
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

