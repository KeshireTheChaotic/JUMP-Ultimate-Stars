
/* JUS-CLASS ALWidgetBase_021d149c::vfunc_05 [class-virtual] slot 5 of vtable 021d149c (own slot,
   not inherited) */

void ALWidgetBase_021d149c::vfunc_05
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           jus_AllocDebug(8,s_ALWidget_cpp_021d17d4,s_CreateIntf_021d16f0,0x71,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    ALWidgetBase_021d29c4::ALWidgetBase_021d29c4(puVar1,param_1);
    *puVar1 = &jus_Class_021d068c::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

