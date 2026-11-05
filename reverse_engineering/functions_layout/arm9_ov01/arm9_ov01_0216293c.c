
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216293c(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *unaff_r6;
  undefined4 unaff_r7;
  uint unaff_r8;
  int unaff_r11;
  undefined4 in_r12;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr1;
  
  if (in_CY) {
    *(undefined4 *)(param_1 + -4) = 0x2162944;
    *(int *)(param_1 + -8) = unaff_r11;
    *(int *)(param_1 + -0xc) = param_1;
  }
  if (in_NG) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (in_CY && !in_ZR) {
    unaff_r6 = (undefined4 *)(param_3 & param_4 >> (unaff_r8 & 0xff));
  }
  if (in_ZR) {
    coprocessor_load(2,in_cr1,param_3 - 0x368);
  }
  if (in_OV) {
    in_r12 = *unaff_r6;
    unaff_r11 = unaff_r6[-1];
    unaff_r7 = unaff_r6[-2];
    unaff_r4 = unaff_r6[-3];
    param_2 = unaff_r6[-5];
    unaff_r6 = unaff_r6 + -6;
  }
  if (in_ZR) {
    coprocessor_load(2,in_cr1,unaff_r11 + -0x3cc);
  }
  if (!in_CY || in_ZR) {
    *(undefined4 *)(unaff_r11 + -4) = in_r12;
    *(int *)(unaff_r11 + -8) = unaff_r11;
    *(undefined4 *)(unaff_r11 + -0xc) = unaff_r7;
    *(undefined4 **)(unaff_r11 + -0x10) = unaff_r6;
    *(undefined4 *)(unaff_r11 + -0x14) = unaff_r5;
    *(undefined4 *)(unaff_r11 + -0x18) = unaff_r4;
    *(undefined4 *)(unaff_r11 + -0x1c) = param_2;
    *(int *)(unaff_r11 + -0x20) = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

