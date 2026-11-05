
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216ba2c(void)

{
  undefined4 in_r3;
  undefined4 in_lr;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr14;
  
  if (in_OV) {
    coprocessor_moveto(2,1,3,in_r3,in_cr14,in_cr0);
    coprocessor_store(7,in_cr6,in_lr);
  }
  if (in_CY) {
    coprocessor_movefromRt(2,1,3,in_cr1,in_cr0);
    coprocessor_function(3,6,3,in_cr6,in_cr7,in_cr14);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

