
void FUN_020443b0(int *param_1)

{
  if ((int *)param_1[0x11] == param_1) {
    TextureImpInstance::vfunc_03();
    return;
  }
  (**(code **)(*(int *)param_1[0x11] + 0xc))();
  return;
}

