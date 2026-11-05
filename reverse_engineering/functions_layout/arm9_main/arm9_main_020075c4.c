
void FUN_020075c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  FUN_020075e0(param_1,param_2,param_3,&uStack_4);
                    /* WARNING: Could not recover jumptable at 0x020075dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

