
/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_0214dd34(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r9;
  int unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_CY;
  
  if (in_CY) {
    *param_1 = 0x214dd3c;
    param_1[-1] = in_lr;
    param_1[-2] = register0x00000054;
    param_1[-3] = in_r12;
    param_1[-4] = unaff_r11;
    param_1[-5] = unaff_r10;
    param_1[-6] = unaff_r9;
    param_1[-7] = param_4;
    param_1[-8] = param_1;
  }
  if (in_NG) {
    return *(undefined4 *)(unaff_r10 + -0x14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

