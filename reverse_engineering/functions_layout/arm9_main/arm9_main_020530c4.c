
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_020530c4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  if (DAT_020aab60 != 0) {
    return;
  }
  if ((DAT_020aab76 != 0) || (iVar1 = OS_GetProcMode(), iVar1 == 0x12)) {
    DAT_020aab74 = 1;
    return;
  }
  iVar3 = *DAT_020aab6c;
  iVar1 = FUN_020531b0();
  if (iVar3 == iVar1) {
                    /* WARNING: Could not recover jumptable at 0x02053124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  if ((*(int *)(iVar3 + 100) != 2) && (iVar2 = OS_SaveContext(iVar3), iVar2 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x02053150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (DAT_020aab68 != (code *)0x0) {
    (*DAT_020aab68)(iVar3,iVar1);
  }
  if (DAT_020aab80 != (code *)0x0) {
    (*DAT_020aab80)(iVar3,iVar1);
  }
  DAT_020aab78 = iVar1;
  OS_LoadContext(iVar1);
  return;
}

