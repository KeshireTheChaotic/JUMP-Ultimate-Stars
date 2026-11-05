
/* WARNING: Control flow encountered bad instruction data */

void FUN_021554d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_lr;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr1;
  
  if (!in_CY || in_ZR) {
    *(undefined4 *)(param_4 + -4) = in_lr;
    *(BADSPACEBASE **)(param_4 + -8) = register0x00000054;
    *(undefined4 *)(param_4 + -0xc) = unaff_r11;
    *(undefined4 *)(param_4 + -0x10) = unaff_r9;
    *(undefined4 *)(param_4 + -0x14) = unaff_r6;
    *(undefined4 *)(param_4 + -0x18) = unaff_r5;
    *(undefined4 *)(param_4 + -0x1c) = unaff_r4;
  }
  software_interrupt(0xdaf7f9);
  if (!in_ZR) {
    coprocessor_store(0xc,in_cr1,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

