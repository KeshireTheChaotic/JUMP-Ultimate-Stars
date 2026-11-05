
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::vfunc_14 [class-virtual] slot 14 of vtable 02094a34 (own
   slot, not inherited) */

void jus_TagDUMY_Derived_02094a34::vfunc_14(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  FUN_020644ec();
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  iVar1 = FUN_0201a9ec(uVar2);
  if (iVar1 == 0) {
    FUN_0201a958(uVar2,1);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}

