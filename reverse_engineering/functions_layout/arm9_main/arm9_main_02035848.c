
/* JUS-CLASS TextureImpInstance::~TextureImpInstance [class-instance-name] slot 0/1 of vtable
   02095c0c; resets vtables (destructor) */

undefined4 * TextureImpInstance::~TextureImpInstance(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &vftable;
  DAT_020a0e78 = DAT_020a0e78 + -1;
  if (param_1[5] != 0) {
    FUN_0203254c(&DAT_020a1d78,param_1);
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 0xc))();
  }
  iVar1 = (**(code **)(*(int *)param_1[7] + 0x14))();
  if (iVar1 == 0) {
    (**(code **)(*(int *)param_1[7] + 0x10))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 0xc))();
  }
  piVar2 = (int *)0x0;
  if ((int *)param_1[0xc] != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*(int *)param_1[0xc] + 0xc))();
  }
  iVar1 = param_1[0xe];
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = 0;
    piVar2 = (int *)param_1[0xe];
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
  }
  jus_Class_020941f0::jus_Class_020941f0(param_1);
  return param_1;
}

