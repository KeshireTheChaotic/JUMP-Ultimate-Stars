
/* WARNING: Control flow encountered bad instruction data */

int FUN_0214dce0(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r5;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_lr;
  bool in_NG;
  bool in_CY;
  bool in_OV;
  
  if (in_NG) {
    return param_1 + -0x18;
  }
  if (!in_CY || -1 < (int)((uint)param_2 & (int)param_2 << 0x10)) {
    *(undefined4 *)unaff_r8 = unaff_r8;
  }
  software_interrupt(0xd8f01c);
  if (in_OV) {
    *param_2 = in_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r5;
    param_2[-3] = param_4;
    param_2[-4] = param_3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

