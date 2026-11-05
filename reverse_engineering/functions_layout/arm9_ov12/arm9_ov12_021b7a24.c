
/* JUS-CLASS CommonWindow::vfunc_05 [class-virtual] slot 5 of vtable 021d37b8 (own slot, not
   inherited) */

void CommonWindow::vfunc_05(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           thunk_FUN_0201a228(8,s_ALWidgetBase_cpp_021d3de8,s_CreateIntf_021d3bc0,0x9ed,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    jus_Class_021d29c4::jus_Class_021d29c4(puVar1,param_1);
    *puVar1 = &jus_Class_021d2964::vftable;
  }
  *(undefined4 **)(param_1 + 0x18) = puVar1;
  return;
}

