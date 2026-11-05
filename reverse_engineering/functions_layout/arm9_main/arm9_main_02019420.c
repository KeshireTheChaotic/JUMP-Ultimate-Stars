
void FUN_02019420(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(code **)*param_1)();
  DAT_02093c20 = param_1;
  if (DAT_020a0e20 == 0) {
    iVar1 = jus_AllocDebug(0x20);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = jus_Class_02094be4::jus_Class_02094be4();
    }
    DAT_020a0e20 = iVar2;
  }
  DAT_020a0d20 = 0;
  *(undefined4 *)(DAT_020a0e20 + 0xc) = DAT_020a1054;
  return;
}

