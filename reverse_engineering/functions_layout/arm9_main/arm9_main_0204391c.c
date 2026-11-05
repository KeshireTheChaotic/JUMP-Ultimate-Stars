
/* JUS-CLASS TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac
   [class-derived] stores vtable 020962ac into *this (constructor) */

undefined4 *
TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = &vftable;
  if (((undefined4 *)param_1[0x11] == param_1) &&
     (piVar1 = (int *)param_1[0x12], piVar1 != (int *)0x0)) {
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)piVar1[0x12];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = piVar2;
    }
  }
  TextureImpInstance::TextureImpInstance(param_1);
  return param_1;
}

