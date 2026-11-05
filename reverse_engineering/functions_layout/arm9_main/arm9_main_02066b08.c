
void FUN_02066b08(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  
  iVar1 = FUN_02065d24();
  if ((DAT_0209dd40 == -1) || (param_3 < 0x31)) {
    MIi_CpuCopy32(param_1,iVar1 + param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x02066b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  FUN_0205160c(DAT_0209dd40,param_1,iVar1 + param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x02066b34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}

