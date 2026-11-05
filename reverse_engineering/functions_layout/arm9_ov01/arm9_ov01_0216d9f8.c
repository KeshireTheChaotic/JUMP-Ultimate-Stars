
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216d9f8(void)

{
  undefined4 unaff_r5;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    software_interrupt(0x697373);
    coprocessor_loadlong(3,in_cr7,unaff_r5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

