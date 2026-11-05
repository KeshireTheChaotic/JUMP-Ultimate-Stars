
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161154(void)

{
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
  int unaff_r7;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    software_interrupt(0x434c41);
  }
  else {
    *unaff_r5 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

