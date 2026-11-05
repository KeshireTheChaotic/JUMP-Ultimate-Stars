
/* JUS-CLASS jus_Class_02097558::vfunc_56 [class-virtual] slot 56 of vtable 02097558 (own slot, not
   inherited) */

void jus_Class_02097558::vfunc_56
               (int *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack_18;
  
  uStack_18 = param_4;
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piVar1 == (int *)0x0) {
    return;
  }
  uStack_18 = *param_3;
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  (**(code **)(*piVar1 + 0x40))(piVar1,uVar2,&uStack_18);
  return;
}

