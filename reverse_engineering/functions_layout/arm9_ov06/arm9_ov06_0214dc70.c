
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dc70(void)

{
  undefined4 unaff_r9;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  undefined4 in_cr5;
  
  if ((bool)in_ZR || in_NG != in_OV) {
    func_0x0181e688();
  }
  if (!(bool)in_ZR) {
    coprocessor_store(8,in_cr5,unaff_r9);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

