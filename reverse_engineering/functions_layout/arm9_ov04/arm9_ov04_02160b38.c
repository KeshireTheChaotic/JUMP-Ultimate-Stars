
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160b38(void)

{
  int unaff_r5;
  undefined1 unaff_r6;
  undefined1 *in_lr;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr4;
  
  if (in_OV) {
    in_lr = *(undefined1 **)(unaff_r5 + -4);
    unaff_r6 = (undefined1)*(undefined4 *)(unaff_r5 + -0x10);
    coprocessor_storelong(3,in_cr4,0x216095c);
  }
  if (!in_NG) {
    *in_lr = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

