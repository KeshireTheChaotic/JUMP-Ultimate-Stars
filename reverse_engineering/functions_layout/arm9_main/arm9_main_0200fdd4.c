
/* JUS-CLASS jus_Class_02095ea0::vfunc_23 [class-virtual] slot 23 of vtable 02095ea0 (own slot, not
   inherited) */

void jus_Class_02095ea0::vfunc_23(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  for (uVar2 = 0; uVar2 < uVar1; uVar2 = uVar2 + 1) {
    (**(code **)(*param_1 + 100))(param_1,uVar2);
  }
  return;
}

