
void FUN_02046ff8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_020a0dd0 + 0x8e4);
  if (iVar1 == 1) {
    iVar1 = jus_AllocDebug(0xb0);
    if (iVar1 == 0) {
      return;
    }
    jus_Class_0209b4f0::jus_Class_0209b4f0(iVar1,param_1);
    return;
  }
  if (iVar1 == 3) {
    iVar1 = jus_AllocDebug(0xb0);
    if (iVar1 == 0) {
      return;
    }
    jus_Class_0209b5d4::jus_Class_0209b5d4(iVar1,param_1);
    return;
  }
  if (iVar1 != 2) {
    iVar1 = jus_AllocDebug(0xb0);
    if (iVar1 == 0) {
      return;
    }
    jus_Class_0209b79c::jus_Class_0209b79c(iVar1,param_1);
    return;
  }
  iVar1 = jus_AllocDebug(0xb0);
  if (iVar1 == 0) {
    return;
  }
  jus_Class_0209b6b8::jus_Class_0209b6b8(iVar1,param_1);
  return;
}

