
/* JUS-CLASS TextureImpInstance::TextureImpInstance [class-instance-name] stores vtable 02095c0c
   into *this (constructor) */

undefined4 * TextureImpInstance::TextureImpInstance(undefined4 *param_1)

{
                    /* JUS-TAG strings=["TextureImpInstance"] */
  jus_Class_020941f0::jus_Class_020941f0();
  *param_1 = &vftable;
  param_1[7] = DAT_020a0dbc;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  DAT_020a0e78 = DAT_020a0e78 + 1;
  FUN_0201ac08(param_1,s_TextureImpInstance_0209da24);
  return param_1;
}

