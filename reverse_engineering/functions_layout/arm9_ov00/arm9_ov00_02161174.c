
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161174(void)

{
  bool in_CY;
  bool in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined1 auStack_18c [396];
  
  if (in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_18c);
    software_interrupt(0x747475);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

