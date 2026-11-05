
/* JUS-CLASS TextureImpInstance::vfunc_10 [class-virtual] slot 10 of vtable 02095c0c (own slot, not
   inherited) */

void TextureImpInstance::vfunc_10(int param_1,int *param_2)

{
  *(int **)(param_1 + 0x20) = param_2;
  (**(code **)(*param_2 + 8))();
  *(short *)(param_1 + 0x2c) = (short)param_2[2];
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)((int)param_2 + 10);
  return;
}

