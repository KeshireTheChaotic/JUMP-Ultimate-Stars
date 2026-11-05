
/* WARNING: Control flow encountered bad instruction data */

void FUN_0216d474(uint param_1,undefined4 param_2,int param_3,byte *param_4)

{
  char unaff_r4;
  char unaff_r6;
  uint unaff_r7;
  uint unaff_r9;
  char *in_r12;
  uint in_lr;
  bool in_ZR;
  undefined1 in_OV;
  
  if ((bool)in_OV) {
    in_r12 = in_r12 + -0x553;
    *in_r12 = unaff_r6;
    unaff_r6 = '\x10' - unaff_r4;
  }
  else {
    unaff_r7 = (uint)*param_4;
    param_3 = (unaff_r9 >> (in_lr & 0x1f) | unaff_r9 << 0x20 - (in_lr & 0x1f)) -
              (int)(param_4 + -0x463);
  }
  if (in_ZR) {
    param_1 = param_1 & (param_1 >> (param_1 & 0x1f) | param_1 << 0x20 - (param_1 & 0x1f));
  }
  if ((bool)in_OV) {
    func_0x03a46a68(param_1,param_2,param_3);
  }
  if ((bool)in_OV) {
    in_r12[-0x573] = unaff_r6;
    s_deckselect_deckselect_aar_0216d4d0._16_4_ = unaff_r7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

