
void FUN_020612d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  OS_DisableInterrupts();
  if (DAT_020aeb9c != 0) {
    OS_RestoreInterrupts();
                    /* WARNING: Could not recover jumptable at 0x020612f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(1);
    return;
  }
  DAT_020aeb9c = 1;
  OS_RestoreInterrupts();
  DAT_020aeba0 = param_1;
  DAT_020aeba4 = param_2;
  iVar1 = FUN_020610e8();
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0206131a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02061310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0);
  return;
}

