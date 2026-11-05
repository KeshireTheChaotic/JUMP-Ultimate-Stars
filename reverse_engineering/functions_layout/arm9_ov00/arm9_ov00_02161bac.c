
/* WARNING: Control flow encountered bad instruction data */

void FUN_02161bac(void)

{
  undefined4 in_r3;
  undefined1 unaff_r6;
  undefined1 *unaff_r8;
  int unaff_r9;
  undefined4 *in_lr;
  bool in_OV;
  
  if (!in_OV) {
    in_OV = SBORROW4(0x6f,unaff_r9);
  }
  if (in_OV) {
    *in_lr = in_r3;
  }
  else {
    *unaff_r8 = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

