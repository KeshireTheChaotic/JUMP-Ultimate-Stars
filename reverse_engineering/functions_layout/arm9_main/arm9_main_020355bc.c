
void FUN_020355bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  DAT_020a0dfc = param_1;
  (**(code **)*param_1)();
  if (DAT_020a1054 != (undefined4 *)0x0) {
    return;
  }
  DAT_020a0dbc = (undefined4 *)FUN_0201a228(8);
  if (DAT_020a0dbc != (undefined4 *)0x0) {
    *DAT_020a0dbc = &jus_TagCNTR_Part_02094b9c::vftable;
    *DAT_020a0dbc = &PTR_vfunc_18_02094b54;
    DAT_020a0dbc[1] = 0;
  }
  puVar1 = (undefined4 *)FUN_0201a228(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    TextureImpInstance::TextureImpInstance(puVar1,0);
    *puVar1 = &jus_Class_02095f10::vftable;
  }
  DAT_020a1054 = puVar1;
  puVar1[2] = 0xffffffff;
  DAT_020a1d9c = DAT_020a1054;
  DAT_020a1d98 = DAT_020a1054;
  DAT_020a0e78 = 0;
  if ((DAT_020a0f7c & 1) == 0) {
    jus_Class_02094300::jus_Class_02094300(&DAT_020a0f80);
    FUN_0200f2b0(&DAT_020a0f80,jus_Class_02094300::vfunc_03,&DAT_020a12b4);
    DAT_020a0f7c = DAT_020a0f7c | 1;
  }
  puVar1 = &DAT_020a19e4 + DAT_020a0cfc;
  DAT_020a0cfc = DAT_020a0cfc + 1;
  *puVar1 = &DAT_020a0f80;
  return;
}

