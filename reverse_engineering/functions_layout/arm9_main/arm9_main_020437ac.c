
/* JUS-CLASS TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac
   [class-derived] stores vtable 020962ac into *this (constructor) */

int * TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac
                (int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  TextureImpInstance::TextureImpInstance();
  *param_1 = (int)&vftable;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((int)param_1 + 0x41) = 0;
  param_1[0x11] = (int)param_1;
  param_1[0x12] = 0;
  param_1[0x13] = param_2;
  param_1[0x14] = -1;
  param_1[0x15] = -1;
  if (param_3 != (int *)0x0) {
    uVar1 = (**(code **)(*param_3 + 0x3c))();
    (**(code **)(*param_1 + 0x28))(param_1,uVar1);
    iVar2 = (**(code **)(*(int *)param_3[7] + 0x20))();
    param_1[7] = iVar2;
  }
  return param_1;
}

