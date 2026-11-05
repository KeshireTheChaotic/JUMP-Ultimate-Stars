
/* WARNING: Control flow encountered bad instruction data */

void FUN_02157130(int param_1)

{
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 4) + 0x21c) + 0x6d) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

