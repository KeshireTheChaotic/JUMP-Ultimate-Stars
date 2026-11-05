
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161148(void)

{
  undefined1 *unaff_r5;
  undefined1 unaff_r6;
  int unaff_r7;
  int unaff_r9;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    software_interrupt(0x4e4c41);
    coprocessor_storelong(5,in_cr6,unaff_r9 + -400);
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    software_interrupt(0x434c41);
  }
  else {
    *unaff_r5 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

