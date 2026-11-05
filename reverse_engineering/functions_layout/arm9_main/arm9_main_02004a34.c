
void FUN_02004a34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_02004a00(param_1,param_2,&uStack_8,&uStack_c,param_4);
                    /* WARNING: Could not recover jumptable at 0x02004a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

