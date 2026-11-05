
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215e6a8(void)

{
  bool in_CY;
  
  if (in_CY) {
    software_interrupt(0x726863);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

