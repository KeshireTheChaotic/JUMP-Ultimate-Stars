
/* WARNING: Control flow encountered bad instruction data */

void FUN_0208dbe0(void)

{
  undefined4 unaff_r10;
  char in_NG;
  bool in_CY;
  char in_OV;
  undefined4 in_cr6;
  
  if (in_CY) {
    coprocessor_storelong(0xc,in_cr6,unaff_r10);
  }
  else {
    software_interrupt(0xa97b4b);
  }
  if (in_NG != in_OV) {
    software_interrupt(0xa2b444);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

