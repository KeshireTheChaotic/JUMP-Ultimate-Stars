
/* JUS-CLASS jus_Prop_Texture::vfunc_49 [class-virtual] slot 49 of vtable 02098af8 (own slot, not
   inherited) */

undefined *
jus_Prop_Texture::vfunc_49(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  DAT_020a1068 = DAT_020a1068 + 1 & 7;
  (**(code **)(*param_1 + 0x20))
            (param_1,param_2,&DAT_020a2084 + DAT_020a1068 * 0xc,*(code **)(*param_1 + 0x20),param_4)
  ;
  return &DAT_020a2084 + DAT_020a1068 * 0xc;
}

