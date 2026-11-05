
/* JUS-CLASS CommonEffect_0209c30c::vfunc_05 [class-virtual] slot 5 of vtable 0209c30c (own slot,
   not inherited) */

void CommonEffect_0209c30c::vfunc_05(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0201a228(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02095878::jus_Class_02095878(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

