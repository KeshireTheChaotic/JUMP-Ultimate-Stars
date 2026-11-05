
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161bac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  char in_NG;
  char in_OV;
  
  if (in_NG == in_OV) {
    *param_1 = 0x2161bb4;
    param_1[-1] = in_lr;
    param_1[-2] = register0x00000054;
    param_1[-3] = in_r12;
    param_1[-4] = unaff_r11;
    param_1[-5] = unaff_r9;
    param_1[-6] = unaff_r8;
    param_1[-7] = unaff_r7;
    param_1[-8] = unaff_r6;
    param_1[-9] = unaff_r5;
    param_1[-10] = unaff_r4;
    param_1[-0xb] = param_3;
    param_1[-0xc] = param_2;
    param_1[-0xd] = param_1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

