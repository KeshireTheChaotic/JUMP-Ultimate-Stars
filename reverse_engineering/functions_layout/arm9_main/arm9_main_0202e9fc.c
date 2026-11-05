
/* JUS-CLASS jus_Class_02097558::vfunc_54 [class-virtual] slot 54 of vtable 02097558 (own slot, not
   inherited) */

undefined * jus_Class_02097558::vfunc_54(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x58))();
  if (piVar1 == (int *)0x0) {
    return &DAT_02093c74;
  }
  uVar2 = (**(code **)(*param_1 + 0x5c))(param_1,param_2);
  puVar3 = (undefined *)(**(code **)(*piVar1 + 0x38))(piVar1,uVar2);
  return puVar3;
}

