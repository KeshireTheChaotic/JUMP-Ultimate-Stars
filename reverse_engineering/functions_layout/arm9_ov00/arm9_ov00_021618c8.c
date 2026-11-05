
/* WARNING: Control flow encountered bad instruction data */

void FUN_021618c8(void)

{
  undefined1 unaff_r6;
  int unaff_r9;
  uint in_lr;
  bool in_OV;
  
  if (in_OV) {
    *(undefined1 *)(unaff_r9 - (in_lr >> 8)) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

