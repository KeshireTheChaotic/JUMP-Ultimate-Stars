
/* WARNING: Control flow encountered bad instruction data */

void FUN_021643a4(void)

{
  undefined4 unaff_r8;
  undefined4 in_cr15;
  
  coprocessor_store2(0,in_cr15,unaff_r8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

