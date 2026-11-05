
void FUN_02052e80(int *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = 0;
  UNRECOVERED_JUMPTABLE = pcRam02052e9c;
  *(undefined4 *)(iVar1 + 0xb0) = 0;
                    /* WARNING: Could not recover jumptable at 0x02052e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar1);
  return;
}

