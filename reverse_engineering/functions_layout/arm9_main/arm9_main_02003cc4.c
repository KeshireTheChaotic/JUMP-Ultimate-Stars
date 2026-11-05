
void FUN_02003cc4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_02003c88(param_1,param_2,param_3,&uStack_4);
                    /* WARNING: Could not recover jumptable at 0x02003cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

