
void FUN_02078a04(int param_1,undefined2 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined1 *)(param_1 + 0x5fb) = 1;
  *(undefined2 *)(param_1 + 0x5fc) = param_2;
  UNRECOVERED_JUMPTABLE = pcRam02078a2c;
  *(undefined1 *)(param_1 + 0x5fa) = 8;
  *(undefined1 *)(param_1 + 0x5f1) = 0xff;
                    /* WARNING: Could not recover jumptable at 0x02078a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

