
/* JUS-CLASS jus_Class_02097098::~jus_Class_02097098 [class-default] slot 0/1 of vtable 02097098;
   resets vtables (destructor) */

undefined4 * jus_Class_02097098::~jus_Class_02097098(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &vftable;
  param_1[0x16] = &DAT_02097114;
  puVar1 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = param_1 + 0x16;
  }
  FUN_020461bc(DAT_020a0e64,puVar1);
  if ((int *)param_1[0x1b] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1b] + 0xc))();
  }
  TextureImpInstance_Derived_020962ac::TextureImpInstance_Derived_020962ac(param_1);
  return param_1;
}

