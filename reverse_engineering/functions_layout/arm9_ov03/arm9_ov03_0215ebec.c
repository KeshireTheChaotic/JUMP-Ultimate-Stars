
/* WARNING: Control flow encountered bad instruction data */

void FUN_0215ebec(undefined4 param_1,uint param_2,undefined4 param_3,byte *param_4)

{
  uint unaff_r4;
  undefined1 unaff_r6;
  undefined1 *in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  bool in_OV;
  undefined4 in_cr4;
  undefined4 in_cr6;
  undefined4 in_cr15;
  undefined1 auStack_10c [268];
  
  if (!in_OV) {
    *in_lr = unaff_r6;
  }
  if (in_NG) {
    unaff_r4 = (uint)*param_4;
  }
  if (in_CY) {
    coprocessor_function(0xe,7,3,in_cr6,in_cr4,in_cr15);
  }
  if (in_ZR) {
    in_OV = SBORROW4(param_2 >> 0xc | param_2 << 0x14,unaff_r4);
  }
  if (in_OV) {
    coprocessor_storelong(0xf,in_cr6,auStack_10c);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

