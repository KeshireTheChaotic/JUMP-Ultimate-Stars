
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215e540(void)

{
  undefined1 *unaff_r5;
  undefined1 *puVar1;
  undefined1 unaff_r6;
  int unaff_r7;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if (in_OV) {
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    coprocessor_storelong(9,in_cr6,*(undefined4 *)(unaff_r7 + -4));
    unaff_r6 = (undefined1)*(undefined4 *)(unaff_r7 + -0x10);
  }
  else {
    puVar1 = unaff_r5 + -0x764;
    *unaff_r5 = unaff_r6;
    *puVar1 = unaff_r6;
    unaff_r5 = puVar1 + -0x764 + -0x764;
    puVar1[-0x764] = unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (!in_OV) {
    *unaff_r5 = unaff_r6;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

