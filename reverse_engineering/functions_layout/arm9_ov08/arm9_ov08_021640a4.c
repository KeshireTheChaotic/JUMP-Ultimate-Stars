
void FUN_021640a4(void)

{
  int iVar1;
  
  if (*(int *)(DAT_0216e828 + 0x40) == 1) {
    if (DAT_0216e824 != (code *)0x0) {
      (*DAT_0216e824)(0x8000000,s_already_DWCi_MOV_WH_SYSSTATE_IDL_0216bf38);
      return;
    }
  }
  else {
    if (DAT_0216e824 != (code *)0x0) {
      (*DAT_0216e824)(0x8000000,s_DWCi_MOV_WH_Finalize__state____d_0216bf5c);
    }
    iVar1 = *(int *)(DAT_0216e828 + 0x40);
    if (((iVar1 != 6) && (iVar1 != 5)) && (iVar1 != 4)) {
      FUN_02164cb8(3);
      FUN_02164170();
      return;
    }
    FUN_02164cb8(3);
    switch(*(undefined4 *)(DAT_0216e828 + 0x44)) {
    case 0:
    case 4:
      iVar1 = FUN_0216489c();
      if (iVar1 == 0) {
        FUN_02164170();
      }
      break;
    case 1:
    case 5:
      iVar1 = FUN_021647b0();
      if (iVar1 == 0) {
        FUN_02164170();
        return;
      }
      break;
    case 2:
      iVar1 = FUN_021648c4();
      if (iVar1 == 0) {
        FUN_02164170();
        return;
      }
      break;
    case 3:
      iVar1 = FUN_021647d8();
      if (iVar1 == 0) {
        FUN_02164170();
        return;
      }
    }
  }
  return;
}

