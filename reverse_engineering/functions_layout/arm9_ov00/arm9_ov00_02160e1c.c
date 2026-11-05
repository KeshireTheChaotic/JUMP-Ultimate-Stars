
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160e1c(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int unaff_r4;
  uint unaff_r5;
  undefined4 unaff_r6;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    coprocessor_loadlong(9,in_cr6,unaff_r4 + -0x150);
    unaff_r6 = *(undefined4 *)(unaff_r4 + -0x338);
    param_4 = *(int *)(unaff_r4 + -0x340);
    unaff_r4 = unaff_r4 + -0x344;
  }
  else {
    param_4 = (unaff_r5 >> 0x1c | unaff_r5 << 4) - param_4;
  }
  if (in_CY) {
    coprocessor_moveto(0xc,3,3,unaff_r6,in_cr5,in_cr4);
  }
  if (in_ZR) {
    in_OV = SBORROW4(param_2 >> 2 | param_2 << 0x1e,param_4);
  }
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
    software_interrupt(0x6c2f65);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

