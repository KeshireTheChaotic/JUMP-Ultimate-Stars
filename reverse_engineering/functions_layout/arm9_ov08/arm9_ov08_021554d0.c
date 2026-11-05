
/* WARNING: Control flow encountered bad instruction data */

void FUN_021554d0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 *unaff_r10;
  bool in_NG;
  bool in_CY;
  undefined4 in_cr4;
  undefined4 in_cr11;
  
  if (!in_CY) {
    coprocessor_load(0xd,in_cr11,param_4);
  }
  if (!in_NG) {
    coprocessor_store(8,in_cr4,param_3 + -0x94);
    *unaff_r10 = unaff_r4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

