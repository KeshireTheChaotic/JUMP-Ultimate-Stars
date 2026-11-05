
/* JUS-CLASS jus_Class_02097558::vfunc_22 [class-virtual] slot 22 of vtable 02097558 (own slot, not
   inherited) */

void jus_Class_02097558::vfunc_22(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_02012318();
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)FUN_02012318(param_1);
  (**(code **)(*piVar2 + 0x2c))();
  return;
}

