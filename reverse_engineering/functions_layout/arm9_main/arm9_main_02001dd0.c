
void FUN_02001dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_02001a28(param_1,0xffff,0x1001,&uStack_c,4);
                    /* WARNING: Could not recover jumptable at 0x02001df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1 != -1);
  return;
}

