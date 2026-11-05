
/* WARNING: Control flow encountered bad instruction data */

void FUN_0208db60(void)

{
  undefined4 unaff_r10;
  bool in_CY;
  undefined4 in_cr2;
  
  if (!in_CY) {
    coprocessor_loadlong(0xb,in_cr2,unaff_r10);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

