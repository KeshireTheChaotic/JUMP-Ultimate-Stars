
/* WARNING: Control flow encountered bad instruction data */

void FUN_021618b8(byte param_1)

{
  int unaff_r4;
  byte unaff_r6;
  undefined1 unaff_r7;
  undefined1 *unaff_r9;
  undefined1 *puVar1;
  uint in_r12;
  uint in_lr;
  bool in_ZR;
  bool in_OV;
  undefined4 in_cr6;
  
  puVar1 = unaff_r9;
  if (!in_OV) {
    puVar1 = unaff_r9 + -0x45f;
    *unaff_r9 = unaff_r7;
  }
  if (in_ZR) {
    unaff_r6 = param_1 & (byte)(in_r12 >> 10);
  }
  if (in_OV) {
    coprocessor_loadlong(1,in_cr6,unaff_r4 + -0xb8);
    puVar1[-(in_lr >> 8)] = unaff_r6;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

