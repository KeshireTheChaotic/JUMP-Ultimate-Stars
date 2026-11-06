
/* JUS-CLASS CommonWindow_Part_020945fc::vfunc_06 [class-virtual] slot 6 of vtable 020945fc (own
   slot, not inherited) */

undefined4 CommonWindow_Part_020945fc::vfunc_06(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_02025a40();
  if (iVar1 == -1) {
    return 0;
  }
  (**(code **)(*param_1 + 0x14))();
  return 1;
}

