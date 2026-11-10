
/* JUS-CLASS jus_Prop_BlendMode::vfunc_08 [class-virtual] slot 8 of vtable 0209a100 (own slot, not
   inherited) */

void jus_Prop_BlendMode::vfunc_08(undefined4 param_1,int param_2,byte *param_3)

{
  *param_3 = (byte)*(undefined2 *)(*(int *)(param_2 + 100) + 0x30) & 7;
  return;
}

