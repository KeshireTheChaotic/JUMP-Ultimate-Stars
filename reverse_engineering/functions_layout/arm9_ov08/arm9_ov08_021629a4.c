
/* WARNING: Control flow encountered bad instruction data */

void FUN_021629a4(uint param_1,int param_2,uint param_3)

{
  int unaff_r6;
  int unaff_r7;
  int unaff_r8;
  int *unaff_r9;
  undefined4 unaff_r11;
  int in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr2;
  
  if (in_NG) {
    coprocessor_store(6,in_cr2,in_lr + -8);
  }
  if (in_CY) {
    param_3 = param_1 & unaff_r8 << 8;
  }
  if (in_NG) {
    *unaff_r9 = in_lr;
    unaff_r9[-1] = (int)unaff_r9;
    unaff_r9[-2] = unaff_r8;
    unaff_r9[-3] = unaff_r7;
    unaff_r9[-4] = unaff_r6;
    unaff_r9[-5] = param_3;
    unaff_r9[-6] = param_2;
    unaff_r9[-7] = param_1;
  }
  else {
    *(int *)(param_1 - 4) = in_lr;
    *(BADSPACEBASE **)(param_1 - 8) = register0x00000054;
    *(undefined4 *)(param_1 - 0xc) = unaff_r11;
  }
  if (!in_CY || in_ZR) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

