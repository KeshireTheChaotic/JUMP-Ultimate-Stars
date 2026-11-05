
void FUN_02060c84(void)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_020557c8(6,0x3000200,0);
  if (iVar2 < 0) {
    OS_RestoreInterrupts(uVar1);
    DAT_020aeb94 = DAT_020aeb94 | 4;
    if (DAT_020aeb60 != (code *)0x0) {
      (*DAT_020aeb60)(2,4,0);
                    /* WARNING: Could not recover jumptable at 0x02060cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
  }
  else {
    DAT_020aeb96 = DAT_020aeb96 | 4;
    DAT_020aeb94 = DAT_020aeb94 & 0xfffb;
    OS_RestoreInterrupts(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x02060ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}

