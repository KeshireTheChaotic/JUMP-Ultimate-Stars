
/* WARNING: Control flow encountered bad instruction data */

void FUN_021716c0(void)

{
  bool in_OV;
  undefined4 in_cr6;
  undefined1 auStack_18c [396];
  
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_18c);
    software_interrupt(0x747475);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

