
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160f7c(undefined4 param_1,undefined4 param_2)

{
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_storelong(3,in_cr6,param_2);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

