
/* JUS-CLASS jus_Class_0209c6bc::vfunc_05 [class-virtual] slot 5 of vtable 0209c6bc (own slot, not
   inherited) */

void jus_Class_0209c6bc::vfunc_05(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = jus_AllocDebug(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02095320::jus_Class_02095320(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

