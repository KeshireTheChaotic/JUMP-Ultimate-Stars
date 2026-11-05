
void FUN_0201aeec(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_020a0c35 == param_2) {
    return;
  }
  if (param_2 == 0) {
    DAT_020a0c35 = 0;
    if (DAT_020a1088 == (int *)0x0) {
      return;
    }
    (**(code **)(*DAT_020a1088 + 4))();
    return;
  }
  iVar1 = jus_AllocDebug(8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_02093ee4::jus_Class_02093ee4();
  }
  DAT_020a1088 = (int *)uVar2;
  DAT_020a0c35 = (char)param_2;
  return;
}

