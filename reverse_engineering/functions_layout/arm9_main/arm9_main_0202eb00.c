
/* JUS-CLASS jus_Class_02097558::vfunc_57 [class-virtual] slot 57 of vtable 02097558 (own slot, not
   inherited) */

void jus_Class_02097558::vfunc_57
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piVar1 == (int *)0x0) {
    return;
  }
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  (**(code **)(*piVar1 + 0x44))(piVar1,uVar2,param_3,*(code **)(*piVar1 + 0x44),param_4);
  return;
}

