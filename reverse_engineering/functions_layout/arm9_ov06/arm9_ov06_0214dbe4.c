
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dbe4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr13;
  
  if (!in_ZR) {
    coprocessor_store(0,in_cr13,param_2 + -0x168);
  }
  if (in_CY) {
    *(undefined4 *)(param_1 + -4) = in_lr;
    *(undefined4 *)(param_1 + -8) = in_r12;
    *(undefined4 *)(param_1 + -0xc) = unaff_r11;
    *(undefined4 *)(param_1 + -0x10) = unaff_r10;
    *(undefined4 *)(param_1 + -0x14) = unaff_r6;
    *(undefined4 *)(param_1 + -0x18) = unaff_r4;
    *(undefined4 *)(param_1 + -0x1c) = param_4;
    *(int *)(param_1 + -0x20) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

