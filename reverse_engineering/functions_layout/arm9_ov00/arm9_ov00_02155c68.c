
/* WARNING: Control flow encountered bad instruction data */

void FUN_02155c68(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

