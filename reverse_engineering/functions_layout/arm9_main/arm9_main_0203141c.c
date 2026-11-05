
void FUN_0203141c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_020a0c50 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 600) != 0) {
    return;
  }
  if (DAT_020a0f64 == 0) {
    return;
  }
  iVar1 = jus_AllocDebug(0xcc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0x021b149c(iVar1,param_1);
  }
  *(undefined4 *)(param_1 + 600) = uVar2;
  FUN_02027db0(uVar2,DAT_020a0d84);
  return;
}

