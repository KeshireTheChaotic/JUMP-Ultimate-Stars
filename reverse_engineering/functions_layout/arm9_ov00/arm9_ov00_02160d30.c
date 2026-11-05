
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160d30(undefined4 param_1,undefined1 *param_2)

{
  undefined4 unaff_r4;
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    *param_2 = (char)unaff_r5;
  }
  else {
    *unaff_r5 = unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

