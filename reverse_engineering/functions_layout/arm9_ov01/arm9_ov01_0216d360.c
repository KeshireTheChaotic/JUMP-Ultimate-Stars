
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216d360(void)

{
  undefined1 unaff_r7;
  int in_r12;
  bool in_CY;
  bool in_OV;
  
  if (in_CY) {
    software_interrupt(0x6e6962);
  }
  if (in_OV) {
    *(undefined1 *)(in_r12 + -0x572) = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

