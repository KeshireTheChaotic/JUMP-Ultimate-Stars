
/* WARNING: Control flow encountered bad instruction data */

void FUN_021608f4(void)

{
  bool in_OV;
  
  if (in_OV) {
    software_interrupt(0x434c41);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

