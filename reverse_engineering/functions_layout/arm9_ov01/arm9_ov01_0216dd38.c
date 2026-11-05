
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216dd38(void)

{
  undefined4 unaff_r5;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_loadlong(3,in_cr7,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

