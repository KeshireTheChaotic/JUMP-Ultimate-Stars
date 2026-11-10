
/* JUS-CLASS jus_Prop_Texture::vfunc_50 [class-virtual] slot 50 of vtable 02098af8 (own slot, not
   inherited) */

void jus_Prop_Texture::vfunc_50(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x50) + 0x1c))();
  *param_3 = *puVar1;
  param_3[1] = puVar1[1];
  param_3[2] = puVar1[2];
  return;
}

