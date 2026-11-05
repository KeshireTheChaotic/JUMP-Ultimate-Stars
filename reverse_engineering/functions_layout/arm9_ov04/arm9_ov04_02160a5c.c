
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160a5c(void)

{
  int unaff_r5;
  undefined1 unaff_r6;
  int in_lr;
  bool in_NG;
  bool in_OV;
  undefined4 in_cr4;
  undefined1 uStack00000000;
  
  if (in_OV) {
    in_lr = *(int *)(unaff_r5 + -4);
    unaff_r6 = (undefined1)*(undefined4 *)(unaff_r5 + -0x10);
    coprocessor_storelong(3,in_cr4,0x2160880);
  }
  if (!in_NG) {
    *(undefined1 *)(in_lr - ((uint)&uStack00000000 >> 0x1e | (int)&uStack00000000 << 2)) = unaff_r6;
    software_interrupt(0x6b726f);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

