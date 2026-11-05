
/* JUS-CLASS PropBindInstance_020950e0::vfunc_14 [class-virtual] slot 14 of vtable 020950e0 (own
   slot, not inherited) */

undefined4 PropBindInstance_020950e0::vfunc_14(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0202ffd4();
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(*(int **)(param_1 + 0x24),param_2);
  if (iVar1 == 0) {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(*(int **)(param_1 + 0xc),param_2);
    return uVar2;
  }
  return 1;
}

