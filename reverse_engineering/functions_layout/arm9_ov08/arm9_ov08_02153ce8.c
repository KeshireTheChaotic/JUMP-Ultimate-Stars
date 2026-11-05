
/* WARNING: Control flow encountered bad instruction data */

void FUN_02153ce8(undefined4 *param_1)

{
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_CY;
  
  if (in_CY) {
    *param_1 = in_lr;
    param_1[-1] = in_r12;
    param_1[-2] = unaff_r11;
    param_1[-3] = unaff_r10;
    param_1[-4] = unaff_r9;
    param_1[-5] = unaff_r7;
  }
  if (in_NG) {
    return;
  }
  if (in_CY) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

