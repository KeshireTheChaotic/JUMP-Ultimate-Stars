
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::vfunc_04 [class-virtual] slot 4 of vtable 02094a34 (own
   slot, not inherited) */

void jus_TagDUMY_Derived_02094a34::vfunc_04(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(8);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_020946e8::jus_Class_020946e8(puVar1,param_1);
    *puVar1 = &jus_TagDUMY_Derived_02094a34_Part_02094628::vftable;
  }
  *(undefined4 **)(param_1 + 0x1c) = puVar1;
  return;
}

