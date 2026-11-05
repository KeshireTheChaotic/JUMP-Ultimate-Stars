
/* WARNING: Control flow encountered bad instruction data */

void FUN_02162e0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  uint unaff_r7;
  int unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  char in_OV;
  undefined4 in_cr1;
  undefined4 in_cr11;
  
  if (!in_CY || in_ZR) {
    *param_4 = in_lr;
    param_4[-1] = unaff_r11;
    param_4[-2] = unaff_r8;
    param_4[-3] = unaff_r5;
    param_4[-4] = param_3;
  }
  if (in_CY) {
    *(undefined4 *)(param_1 + -4) = in_lr;
    *(undefined4 *)(param_1 + -8) = in_r12;
    *(undefined4 *)(param_1 + -0xc) = unaff_r11;
    *(undefined4 *)(param_1 + -0x10) = unaff_r6;
    *(int *)(param_1 + -0x14) = param_1;
  }
  if (in_NG != in_OV) {
    unaff_r4 = unaff_r7 & unaff_r8 << 0xf;
  }
  if (!in_ZR) {
    coprocessor_storelong(0xd,in_cr11,unaff_r4 + 0x3c0);
  }
  if (in_CY) {
    coprocessor_load(0xc,in_cr1,param_1 + -0x1b4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

