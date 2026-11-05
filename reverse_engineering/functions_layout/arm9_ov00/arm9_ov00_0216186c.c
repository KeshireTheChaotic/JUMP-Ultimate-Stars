
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216186c(void)

{
  bool in_CY;
  bool in_OV;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr15;
  
  if (in_OV) {
    software_interrupt(0x666e69);
  }
  if (in_CY) {
    coprocessor_function(2,6,1,in_cr6,in_cr7,in_cr15);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

