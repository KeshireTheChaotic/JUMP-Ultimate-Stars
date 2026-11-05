
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02056de4(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = FUN_02056d50();
  if (iVar1 != 0) {
    return;
  }
  do {
    iVar1 = FUN_02057118(0);
  } while (iVar1 != 0);
  iVar1 = FUN_02056d50(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02056e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_02056be0();
  iVar1 = FUN_02056d50(param_1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02056e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  do {
    FUN_02057118(1);
    iVar1 = FUN_02056d50(param_1);
  } while (iVar1 == 0);
  return;
}

