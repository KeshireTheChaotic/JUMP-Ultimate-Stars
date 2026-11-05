
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02056c14(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_020558a4(7,FUN_02056c80);
  iVar1 = FUN_02056b40();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0205587c(7,1);
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02056c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  do {
    FUN_0205529c(100);
    iVar1 = FUN_0205587c(7,1);
  } while (iVar1 == 0);
  return;
}

