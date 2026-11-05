
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dc00(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 *unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_NG;
  bool in_OV;
  
  if (!in_NG) {
    *unaff_r8 = unaff_r7;
  }
  *unaff_r8 = param_1;
  unaff_r8[1] = param_3;
  unaff_r8[2] = unaff_r4;
  unaff_r8[3] = in_r12;
  unaff_r8[4] = register0x00000054;
  unaff_r8[5] = in_lr;
  unaff_r8[6] = 0x214dc0c;
  if (in_OV) {
    *param_2 = in_lr;
    param_2[-1] = unaff_r11;
    param_2[-2] = unaff_r6;
    param_2[-3] = unaff_r5;
    param_2[-4] = param_3;
    param_2[-5] = param_2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

