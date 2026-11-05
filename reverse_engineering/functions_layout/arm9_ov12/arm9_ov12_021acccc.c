
/* JUS-CLASS jus_Class_021d149c::vfunc_05 [class-virtual] slot 5 of vtable 021d149c (own slot, not
   inherited) */

void jus_Class_021d149c::vfunc_05
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(8,s_ALWidget_cpp_021d17d4,s_CreateIntf_021d16f0,0x71,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_021d29c4::jus_Class_021d29c4(puVar1,param_1);
    *puVar1 = &jus_Class_021d068c::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

