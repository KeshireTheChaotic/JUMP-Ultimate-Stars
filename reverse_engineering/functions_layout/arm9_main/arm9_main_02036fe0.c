
/* JUS-CLASS ScreenInstance_Derived_02093d14::vfunc_52 [class-virtual] slot 52 of vtable 02093d14
   (own slot, not inherited) */

bool ScreenInstance_Derived_02093d14::vfunc_52(undefined4 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = iRam02037000;
  if (*param_2 == iRam02037000) {
    iVar1 = (int)(char)param_2[1];
  }
  return *param_2 == iRam02037000 && iVar1 == 0;
}

