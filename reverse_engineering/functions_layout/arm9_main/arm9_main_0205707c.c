
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0205707c(uint param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02056b40();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_02056b88(iVar1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x020570a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((param_1 & 1) == 0) {
    return;
  }
  iVar1 = FUN_02056cb0(param_1 & 1);
  if (iVar1 < 1) {
    FUN_02056e74(1);
  }
  else {
    do {
      iVar1 = FUN_02057118(0);
    } while (iVar1 != 0);
    iVar1 = FUN_02056b88();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_02056be0();
  do {
    FUN_02057118(1);
    iVar1 = FUN_02056b88();
  } while (iVar1 == 0);
  return;
}

