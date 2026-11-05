
void FUN_02066dfc(undefined4 param_1,int param_2,uint param_3)

{
  code *UNRECOVERED_JUMPTABLE_00;
  
  if ((DAT_0209dd40 == -1) || (param_3 < 0x31)) {
    MIi_CpuCopy32(param_1,param_2 + 0x7000400,param_3);
                    /* WARNING: Could not recover jumptable at 0x02066e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0205160c(DAT_0209dd40,param_1,param_2 + 0x7000400);
                    /* WARNING: Could not recover jumptable at 0x02066e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}

