
/* JUS-CLASS jus_Class_02097558::vfunc_50 [class-virtual] slot 50 of vtable 02097558 (own slot, not
   inherited) */

undefined * jus_Class_02097558::vfunc_50(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piVar1 == (int *)0x0) {
    return &DAT_0209d91c;
  }
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  puVar3 = (undefined *)(**(code **)(*piVar1 + 0x28))(piVar1,uVar2);
  return puVar3;
}

