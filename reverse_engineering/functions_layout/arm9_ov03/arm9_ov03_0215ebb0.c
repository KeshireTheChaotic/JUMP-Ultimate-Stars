
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215ebb0(void)

{
  bool in_OV;
  
  if (in_OV) {
    software_smc(6);
    software_interrupt(0x2f6c6c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

