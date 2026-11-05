
/* JUS-CLASS PropBindInstance_020950e0::vfunc_09 [class-virtual] slot 9 of vtable 020950e0 (own
   slot, not inherited) */

void PropBindInstance_020950e0::vfunc_09
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined2 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0202fcd0();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x24))
                    (*(int **)(param_1 + 0x24),param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))
              (*(int **)(param_1 + 0xc),param_2,param_3,param_4,param_5);
    return;
  }
  return;
}

