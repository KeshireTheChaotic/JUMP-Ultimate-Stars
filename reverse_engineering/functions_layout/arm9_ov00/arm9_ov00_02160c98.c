
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160c98(void)

{
  bool in_CY;
  bool in_OV;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr9;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  if (in_OV) {
    coprocessor_function(0,6,3,in_cr7,in_cr5,in_cr15);
  }
  if (in_CY) {
    software_interrupt(0x676e69);
  }
  if (in_OV) {
    coprocessor_function(2,6,1,in_cr6,in_cr9,in_cr14);
  }
  if (in_CY) {
    software_interrupt(0x6e6962);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

