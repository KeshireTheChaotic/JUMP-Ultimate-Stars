
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x021617b8) */

void FUN_021617a0(void)

{
  undefined1 unaff_r7;
  undefined1 *in_r12;
  bool in_OV;
  
  if (in_OV) {
    software_interrupt(0x632f7a);
  }
  else {
    *in_r12 = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

