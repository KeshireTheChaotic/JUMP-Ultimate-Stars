
void FUN_0216485c(int param_1)

{
  int iVar1;
  
  if (*(short *)(param_1 + 2) != 0) {
    FUN_02164ca4();
    FUN_02164170();
    return;
  }
  iVar1 = FUN_02164838();
  if (iVar1 == 0) {
    if (DAT_0216e824 != (code *)0x0) {
      (*DAT_0216e824)(0x8000000,s_DWCi_MOV_WH_StateInEndParent_fai_0216c080);
    }
    FUN_02164170();
  }
  return;
}

