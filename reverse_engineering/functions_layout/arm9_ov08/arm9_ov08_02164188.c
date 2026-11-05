
undefined4 FUN_02164188(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0205a408(DAT_0216e828 + 0x13e0,param_1,DAT_0216e828 + 0x1c00);
  if (iVar1 == 7) {
    if (DAT_0216e824 != (code *)0x0) {
      (*DAT_0216e824)(0x8000000,s_DWCi_MOV_WH_StepDataSharing___Wa_0216bf80);
    }
    return 0;
  }
  if (iVar1 != 5) {
    if (iVar1 == 0) {
      return 1;
    }
    FUN_02164ca4();
    return 0;
  }
  if (DAT_0216e824 != (code *)0x0) {
    (*DAT_0216e824)(0x8000000,FUN_0216bfb0);
  }
  FUN_02164ca4(5);
  return 0;
}

