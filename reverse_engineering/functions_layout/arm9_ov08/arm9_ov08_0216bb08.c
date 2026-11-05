
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216bb08(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4)

{
  char unaff_r7;
  char *in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr14;
  
  if (in_NG) {
    unaff_r7 = -(char)param_3;
  }
  if (in_OV) {
    coprocessor_moveto(3,1,3,param_4,in_cr14,in_cr0);
    coprocessor_store(0xc,in_cr6,in_lr);
  }
  if (!in_CY) {
    *param_3 = unaff_r7;
  }
  if (!in_OV) {
    *in_r12 = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

