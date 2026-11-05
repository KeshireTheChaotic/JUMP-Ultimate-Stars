
/* JUS-CLASS TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
   [class-derived] stores vtable 020965e0 into *this (constructor) */

undefined4 *
TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  
  TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac(param_1,param_2,param_4);
  *param_1 = &vftable;
  param_1[0x16] = param_3;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 1;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  if ((param_4 != (int *)0x0) && (iVar1 = (**(code **)(*param_4 + 0x68))(), iVar1 != 0)) {
    param_1[0x17] = param_4[0x17];
    param_1[0x19] = param_4[0x19];
  }
  return param_1;
}

