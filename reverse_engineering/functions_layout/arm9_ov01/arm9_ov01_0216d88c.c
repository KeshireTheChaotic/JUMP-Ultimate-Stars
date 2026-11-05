
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216d88c(void)

{
  int in_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr15;
  
  if (in_OV) {
    register0x00000054 = *(BADSPACEBASE **)(in_r3 + -8);
    coprocessor_moveto(9,3,3,*(undefined4 *)(in_r3 + -0x1c),in_cr15,in_cr4);
  }
  if (in_OV || SBORROW4(unaff_r4 >> 0x12,in_r3)) {
    coprocessor_loadlong(3,in_cr7,unaff_r5);
    software_smc(4);
    coprocessor_storelong(0xf,in_cr6,(int)register0x00000054 + -0x18c);
    software_interrupt(0x747475);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

