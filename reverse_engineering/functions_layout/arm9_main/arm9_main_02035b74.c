
/* JUS-CLASS TextureImpInstance::vfunc_03 [class-virtual] slot 3 of vtable 02095c0c (own slot, not
   inherited) */

undefined2 TextureImpInstance::vfunc_03(int param_1)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + -1;
  if ((*(short *)(param_1 + 4) == 0) && (FUN_02035bbc(), *(int *)(param_1 + 0x14) == 0)) {
    FUN_020324dc(&DAT_020a1d78,param_1);
  }
  return *(undefined2 *)(param_1 + 4);
}

