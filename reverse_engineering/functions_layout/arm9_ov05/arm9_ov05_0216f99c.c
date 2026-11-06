
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216f99c(void)

{
  undefined1 unaff_r6;
  int unaff_r11;
  undefined1 in_OV;
  
  if ((bool)in_OV) {
    func_0x03a48f34();
  }
  if ((bool)in_OV) {
    *(undefined1 *)(unaff_r11 + -0x16d) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

