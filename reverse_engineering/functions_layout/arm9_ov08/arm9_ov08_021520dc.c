
/* WARNING: Control flow encountered bad instruction data */

undefined8
FUN_021520dc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_lr;
  char in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  
  if (in_OV) {
    return CONCAT44(param_1[-9],param_1 + -10);
  }
  if (in_ZR || in_NG != '\0') {
    param_1[-1] = register0x00000054;
    param_1[-2] = unaff_r11;
    param_1[-3] = param_4;
    param_1[-4] = param_2;
  }
  if (!in_ZR) {
    *param_1 = 0x21520ec;
    param_1[-1] = in_lr;
    param_1[-2] = register0x00000054;
    param_1[-3] = unaff_r8;
    param_1[-4] = unaff_r7;
    param_1[-5] = unaff_r6;
    param_1[-6] = param_4;
    param_1[-7] = param_3;
  }
  if (in_CY && !in_ZR) {
    param_1[-1] = in_lr;
    param_1[-2] = unaff_r10;
    param_1[-3] = unaff_r6;
    param_1[-4] = unaff_r5;
    param_1[-5] = unaff_r4;
    param_1[-6] = param_4;
  }
  if (!in_ZR) {
    *param_1 = param_1 + -0x100;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

