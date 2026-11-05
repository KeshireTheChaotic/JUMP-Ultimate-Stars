
/* JUS-CLASS ALStreamImp::vfunc_08 [class-virtual] slot 8 of vtable 02094ac4 (own slot, not
   inherited) */

void ALStreamImp::vfunc_08(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_1[8] == 0) {
    return;
  }
  uVar1 = (**(code **)(*param_1 + 0x1c))();
  if (param_2 < uVar1) {
    FUN_0201aa9c(param_1 + 8,param_2);
  }
  param_1[3] = param_2;
  uVar1 = param_1[2];
  if ((int)param_2 <= param_1[2]) {
    uVar1 = param_2;
  }
  param_1[2] = uVar1;
  return;
}

