
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161360(void)

{
  bool in_OV;
  undefined4 in_cr6;
  undefined1 auStack_10c [268];
  
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_10c);
    software_interrupt(0x747475);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

