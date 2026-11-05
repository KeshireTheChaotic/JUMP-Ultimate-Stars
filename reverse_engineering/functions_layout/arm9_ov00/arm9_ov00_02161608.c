
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161608(void)

{
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (!in_OV) {
    *unaff_r5 = unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

