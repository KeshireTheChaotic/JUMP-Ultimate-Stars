
void FUN_0206451c(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = FUN_020645d8(&uStack_10);
  if ((iVar1 == 0) ||
     (iVar1 = FUN_02064550(param_1,uStack_10,uStack_c,(int)register0x00000054 + -8), iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0206454c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02064542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(1);
  return;
}

