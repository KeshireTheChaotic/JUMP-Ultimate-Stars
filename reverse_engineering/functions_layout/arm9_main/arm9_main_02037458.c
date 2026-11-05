
/* JUS-CLASS ScreenInstance_Derived_02093d14::vfunc_44 [class-virtual] slot 44 of vtable 02093d14
   (own slot, not inherited) */

bool ScreenInstance_Derived_02093d14::vfunc_44(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_2;
  piVar1 = piRam0203747c;
  if (piVar2 == piRam0203747c) {
    piVar1 = (int *)param_2[4];
    param_2 = piRam02037480;
  }
  return piVar2 == piRam0203747c && piVar1 == param_2;
}

