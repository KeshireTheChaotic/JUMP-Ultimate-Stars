
/* WARNING: Control flow encountered bad instruction data */

void FUN_02160f34(void)

{
  int in_r3;
  undefined4 unaff_r4;
  uint unaff_r5;
  undefined1 in_NG;
  bool in_OV;
  undefined4 in_cr6;
  
  if (in_OV) {
    coprocessor_loadlong(9,in_cr6,unaff_r4);
  }
  else {
    in_NG = (int)((unaff_r5 >> 0x1e | unaff_r5 << 2) - in_r3) < 0;
  }
  if (!(bool)in_NG) {
    software_interrupt(0x656361);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

