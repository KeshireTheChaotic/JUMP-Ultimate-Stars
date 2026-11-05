
/* JUS-CLASS PropBindInstance_020950e0::vfunc_06 [class-virtual] slot 6 of vtable 020950e0 (own
   slot, not inherited) */

void PropBindInstance_020950e0::vfunc_06(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0202faac();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x18))
                    (*(int **)(param_1 + 0x24),param_2,param_3);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x18))(*(int **)(param_1 + 0xc),param_2,param_3);
    return;
  }
  return;
}

