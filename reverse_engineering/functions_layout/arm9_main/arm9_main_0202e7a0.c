
/* JUS-CLASS jus_Class_02097558::vfunc_43 [class-virtual] slot 43 of vtable 02097558 (own slot, not
   inherited) */

void jus_Class_02097558::vfunc_43
               (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*param_2 + 0x58))
                            (param_2,param_3,param_3,*(code **)(*param_2 + 0x58),param_4);
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0x5c))(param_2,param_3);
  (**(code **)(*piVar1 + 0xc))(param_1,piVar1,uVar2);
  return;
}

