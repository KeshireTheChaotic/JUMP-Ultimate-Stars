
/* JUS-CLASS TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
   [class-derived] stores vtable 020965e0 into *this (constructor) */

undefined4 *
TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &vftable;
  if (*(char *)(param_1 + 0x1a) != '\0') {
    uVar2 = param_1[0x17];
    iVar1 = FUN_0201a9ec(uVar2);
    if (iVar1 == 0) {
      FUN_0201a958(uVar2,1);
    }
  }
  TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac(param_1);
  return param_1;
}

