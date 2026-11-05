
/* JUS-CLASS TextureInstance::TextureInstance [class-instance-name] stores vtable 02093f34 into
   *this (constructor) */

undefined4 * TextureInstance::TextureInstance(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
                    /* JUS-TAG strings=["TextureInstance"] */
  puVar1 = param_1;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)&DAT_020a0c34;
  }
  *param_1 = &vftable;
  if (param_2 == 0) {
    param_2 = puVar1[0x108];
  }
  param_1[1] = param_2;
  FUN_0201ac08(param_1,s_TextureInstance_0209da14);
  return param_1;
}

