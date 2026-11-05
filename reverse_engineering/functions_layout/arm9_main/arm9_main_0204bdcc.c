
/* JUS-CLASS jus_Class_0209455c::vfunc_07 [class-virtual] slot 7 of vtable 0209455c (own slot, not
   inherited) */

undefined4 * jus_Class_0209455c::vfunc_07(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &vftable;
  iVar2 = param_1[8];
  if (((iVar2 != 0) && ((param_1[10] & 2) != 0)) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  iVar2 = param_1[9];
  if (((iVar2 != 0) && ((param_1[10] & 4) != 0)) && (iVar1 = FUN_0201a9ec(iVar2), iVar1 == 0)) {
    FUN_0201a958(iVar2,1);
  }
  iVar2 = FUN_0201a9ec(param_1);
  if (iVar2 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

