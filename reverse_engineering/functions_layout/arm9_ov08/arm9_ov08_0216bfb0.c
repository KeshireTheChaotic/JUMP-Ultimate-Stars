
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216bfb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_OV;
  
  if (in_OV) {
    *(undefined4 *)(param_4 + -4) = in_lr;
    *(undefined4 *)(param_4 + -8) = in_r12;
    *(undefined4 *)(param_4 + -0xc) = unaff_r10;
    *(undefined4 *)(param_4 + -0x10) = unaff_r9;
    *(undefined4 *)(param_4 + -0x14) = unaff_r8;
    *(undefined4 *)(param_4 + -0x18) = unaff_r6;
    *(undefined4 *)(param_4 + -0x1c) = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

