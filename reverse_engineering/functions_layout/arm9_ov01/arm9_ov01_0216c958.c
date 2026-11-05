
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216c958(uint param_1)

{
  char unaff_r5;
  char unaff_r6;
  uint unaff_r8;
  int in_r12;
  bool in_ZR;
  bool in_CY;
  undefined1 in_OV;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  
  if ((bool)in_OV) {
    software_interrupt(0x434c41);
    software_interrupt(0x72746e);
  }
  else {
    unaff_r6 = -unaff_r5;
  }
  if (in_CY) {
    coprocessor_function(0xd,7,2,in_cr6,in_cr0,in_cr9);
  }
  if (in_ZR) {
    param_1 = param_1 & ((uint)in_CY << 0x1f | unaff_r8 >> 1);
  }
  if ((bool)in_OV) {
    func_0x03a45e84(param_1);
  }
  if ((bool)in_OV) {
    *(char *)(in_r12 + -0x553) = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

