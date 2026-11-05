
/* WARNING: Control flow encountered bad instruction data */

void FUN_02169780(void)

{
  int in_r3;
  bool in_OV;
  undefined4 in_cr7;
  
  if (in_OV) {
    coprocessor_storelong(5,in_cr7,in_r3 + -0x1b8);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

