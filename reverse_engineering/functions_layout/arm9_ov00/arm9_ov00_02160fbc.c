
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160fbc(void)

{
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr7;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_OV) {
    coprocessor_function(0,6,3,in_cr7,in_cr5,in_cr15);
  }
  if (in_CY) {
    software_interrupt(0x676e69);
    coprocessor_function(2,6,3,in_cr7,in_cr14,in_cr5);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

