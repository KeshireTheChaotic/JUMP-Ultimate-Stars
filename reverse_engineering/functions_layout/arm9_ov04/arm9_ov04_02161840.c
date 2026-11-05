
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161840(void)

{
  int unaff_r5;
  undefined1 unaff_r7;
  undefined1 *in_r12;
  int iVar1;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    iVar1 = *(int *)(unaff_r5 + -8);
    **(undefined4 **)(unaff_r5 + -4) = *(undefined4 *)(unaff_r5 + -0x1c);
    coprocessor_storelong(0xf,in_cr6,iVar1 + -0x10c);
    software_interrupt(0x747475);
  }
  else {
    *in_r12 = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

