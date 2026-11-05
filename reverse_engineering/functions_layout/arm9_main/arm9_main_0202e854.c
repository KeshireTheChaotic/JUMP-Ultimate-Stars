
/* JUS-CLASS jus_Class_02097558::vfunc_45 [class-virtual] slot 45 of vtable 02097558 (own slot, not
   inherited) */

undefined4 jus_Class_02097558::vfunc_45(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  uVar2 = (**(code **)(*piVar1 + 0x14))(piVar1,uVar2);
  return uVar2;
}

