
/* JUS-CLASS PropBindInstance_020950e0::vfunc_11 [class-virtual] slot 11 of vtable 020950e0 (own
   slot, not inherited) */

int PropBindInstance_020950e0::vfunc_11(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))();
  iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0x2c))();
  return (uint)*(ushort *)(param_1 + 10) + iVar1 + iVar2;
}

