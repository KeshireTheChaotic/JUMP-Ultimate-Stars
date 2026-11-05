
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216badc(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 unaff_r7;
  undefined1 *in_r12;
  bool in_CY;
  bool in_OV;
  
  if (!in_CY) {
    *param_3 = unaff_r7;
  }
  if (!in_OV) {
    *in_r12 = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

