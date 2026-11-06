
/* JUS-CLASS jus_TagSPDS_0209b9ac::vfunc_05 [class-virtual] slot 5 of vtable 0209b9ac (own slot, not
   inherited) */

void jus_TagSPDS_0209b9ac::vfunc_05(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0201a228(8);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_02095380::jus_Class_02095380(puVar1,param_1);
    *puVar1 = &jus_TagSPDS_020952c0::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

