
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215c5c4(void)

{
  int unaff_r4;
  undefined1 unaff_r6;
  int unaff_r9;
  uint in_lr;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_loadlong(1,in_cr6,unaff_r4 + -0xb8);
    *(undefined1 *)(unaff_r9 - (in_lr >> 8)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

