
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0205822c(void)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = FUN_02058044();
  if (iVar1 != 0) {
    return 3;
  }
  iVar1 = FUN_02057f40(1,0);
  if (iVar1 == 0) {
    FUN_02057b40();
    FUN_020558a4(10,0);
    DAT_020acae8 = 0;
    DAT_020acae4 = 0;
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02058264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)();
  return uVar2;
}

