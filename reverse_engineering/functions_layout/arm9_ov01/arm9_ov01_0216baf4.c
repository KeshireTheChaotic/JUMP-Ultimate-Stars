
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216baf4(undefined4 param_1,undefined4 param_2)

{
  bool in_OV;
  undefined4 in_cr4;
  
  if (in_OV) {
    coprocessor_storelong(7,in_cr4,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

