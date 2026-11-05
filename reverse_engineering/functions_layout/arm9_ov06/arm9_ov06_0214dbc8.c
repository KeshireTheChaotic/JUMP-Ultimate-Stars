
/* WARNING: Control flow encountered bad instruction data */

void FUN_0214dbc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 in_lr;
  bool in_ZR;
  undefined4 in_cr13;
  
  if (in_ZR) {
    register0x00000054 = (BADSPACEBASE *)(unaff_r4 & 0x33400);
  }
  *(undefined4 *)((int)register0x00000054 + -4) = in_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r5;
  *(uint *)((int)register0x00000054 + -0x14) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x18) = param_4;
  DAT_020a0f10 = DAT_020a0f10 + 1;
  if (*(short *)(DAT_02172960 + 0x168) != 0) {
    coprocessor_store(0,in_cr13,0x21727f8);
  }
  uRam00000164 = in_lr;
  uRam00000160 = in_r12;
  uRam0000015c = unaff_r11;
  uRam00000158 = unaff_r10;
  uRam00000154 = param_1;
  uRam00000150 = unaff_r4;
  iRam0000014c = DAT_02172960;
  uRam00000148 = 0x168;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

